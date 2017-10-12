window.web = {
    __callback: {},
    //重命名方法
    _rebuildMethod(func) {
        if (func != null && func != undefined) {
            var funcID = "__callback__" + (+new Date)
            this.__callback[funcID] = func;
            return funcID;
        }
        return null;
    },
    //调起方法
    _invokeMethod(uri) {
        var iframe = document.createElement("iframe");
        iframe.src = uri;
        document.body.appendChild(iframe);
        iframe.parentNode.removeChild(iframe);
        iframe = null;
    },
    invokeCallback: function(cbID,cbValue) {
        if (cbID == null || cbID == undefined) {
            return;
        } 
        var cb = web.__callback[cbID];
        if (cb == null || cb == undefined) {
            return;
        }
        web.__callback[cbID] = undefined;
        cb(cbValue);
    },
    call: function(obj,functionName,args) {
        var uri = "jsbridge://" + obj + "/" + functionName;
        if (args != null) {
            uri += "?params="
            for (i in args) {
                if (typeof args[i] == "function") {
                    var newMethod = this._rebuildMethod(args[i]);
                    if (newMethod != null) {
                        args[i] = newMethod;
                    } else {
                        //移除该键值对
                    }
                }
            }
            uri += JSON.stringify(args);
        }
        this._invokeMethod(uri);
    },
    inject: function(obj,methods) {
        window[obj] = {};
        var jsObj = window[obj];
        for (var i = 0, length = methods.length; i < length; i++) {
            (function() {
                var method = methods[i];
                var jsMethod = method.replace(new RegExp(":","g"),"");
                jsObj[jsMethod] = function() {
                    return web.call(obj,method,Array.prototype.slice.call(arguments))
                }
            })()
        }
    },
    //获取当前系统版本号
    getVersion: function(callback) {
        window.web.call("common","version",{"successcallback":callback});
    },
    openVideoList: function() {
        window.web.call("router","open",{"path":"video/list"});
    },
    getLogContainer: function() {
        var box = document.createElement('div'),
            style = box.style;

        box.className = 'console-log';
        style.cssText = 'position:fixed; top:0; left:0; width:100%; max-height:120px; box-sizing:border-box; font:12px Courier New; color:#fff; background-color:rgba(0,0,0,0.7); word-wrap:break-word; word-break:break-all; overflow-y:scroll; padding:5px 5px; z-index = 1e6;';

        box.innerHTML = '<p style="margin:0 10px;padding:0;text-align: right"><button class="j_reload" style="color:#eee; background: #333;border:0;">刷新</button><button class="j_clear" style="color:#eee; background: #333;border:0; margin-left:5px;">清空</button></p><div></div>';
        document.documentElement.appendChild(box);

        var log = box.querySelector('div');

        box.querySelector('button.j_reload').addEventListener('click', function (e) {
            location.reload();
        });
        box.querySelector('button.j_clear').addEventListener('click', function (e) {
            log.innerHTML = '';
            curLogCount = 0;
        }, false);

        return log;
    },
    rewriteConsole: function(){
        var console = window.console || {};
        var oldLog = console.log;
        var maxLogCount = 100;
        var curLogCount = 0;
        console.log = function () {
            var args = [].slice.call(arguments);
            oldLog && oldLog.apply(console, args);
    
            var msg = '';
            for (var i = 0, obj, len = args.length; i < len; i++) {
                obj = args[i];
                try {
                    obj = JSON.stringify(obj);
                } catch (e) {}
    
                if (typeof obj === 'string') {
                    obj = obj.replace(/</g, '&lt;').replace(/>/g, '&gt;');
                }
                if (i == 0) msg = obj;else msg += ', ' + obj;
            }
            var logContainer = this._logContainer || (this._logContainer = web.getLogContainer());
            curLogCount += 1;
            if (curLogCount < maxLogCount) {
                logContainer.innerHTML += '&gt; ' + msg + '<br/>';
            } else {
                curLogCount = 0;
                logContainer.innerHTML = '&gt; ' + msg + '<br/>';
            }
            logContainer.scrollTop = logContainer.scrollHeight - logContainer.clientHeight;
        }
    }
}

window.onload = window.web.rewriteConsole;
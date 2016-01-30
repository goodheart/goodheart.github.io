title: NSScanner使用方法
date: 2015-09-20 21:38:34
tags:
---

## 实例方法

```bash 
- (NSString *)string;
- (NSUInteger)scanLocation;
- (void)setScanLocation:(NSUInteger)pos;//<span style="font-family: Arial, Helvetica, sans-serif;">设置开始扫描的位置</span>
- (void)setCharactersToBeSkipped:(NSCharacterSet *)set;//扫描的时候需要忽略的值
- (void)setCaseSensitive:(BOOL)flag; //是否区分大小写
- (void)setLocale:(id)locale; //大概意思是不同语言环境解释字符串的方式不一样，不懂
- (NSCharacterSet *)charactersToBeSkipped; //扫描时所有被忽略的值
- (BOOL)caseSensitive;
- (id)locale;

- (BOOL)scanInt:(int *)value;  //是否找到一个十进制 int
- (BOOL)scanInteger:(NSInteger *)value NS_AVAILABLE(10_5, 2_0);  //是否找到一个十进制 NSInteger
- (BOOL)scanHexLongLong:(unsigned long long *)result NS_AVAILABLE(10_5, 2_0);   //是否找到16进制的long long类型的数字
- (BOOL)scanHexFloat:(float *)result NS_AVAILABLE(10_5, 2_0);		// Corresponding to %a or %A formatting. Requires "0x" or "0X" prefix. 
- (BOOL)scanHexDouble:(double *)result NS_AVAILABLE(10_5, 2_0);		// Corresponding to %a or %A formatting. Requires "0x" or "0X" prefix. 
- (BOOL)scanHexInt:(unsigned *)value;		// Optionally prefixed with "0x" or "0X"
- (BOOL)scanLongLong:(long long *)value;
- (BOOL)scanFloat:(float *)value;
- (BOOL)scanDouble:(double *)value;

- (BOOL)scanString:(NSString *)string intoString:(NSString **)value; <span style="font-family: Arial, Helvetica, sans-serif;">//</span><span style="font-family: Arial, Helvetica, sans-serif;">从scan中扫描出set中的数据放入value中</span>

- (BOOL)scanCharactersFromSet:(NSCharacterSet *)set intoString:(NSString **)value;<span style="font-family: Arial, Helvetica, sans-serif;">//</span><span style="font-family: Arial, Helvetica, sans-serif;">从scan中扫描出set中的数据放入value中</span>
- (BOOL)scanUpToString:(NSString *)string intoString:(NSString **)value;//<span style="font-family: Arial, Helvetica, sans-serif;">从scan中扫描出set之外的数据放入value中</span>
- (BOOL)scanUpToCharactersFromSet:(NSCharacterSet *)set intoString:(NSString **)value;//从scan中扫描出set之外的数据放入value中
- (BOOL)isAtEnd;//是否扫描达到终点

- (id)initWithString:(NSString *)string;
+ (id)scannerWithString:(NSString *)string;
+ (id)localizedScannerWithString:(NSString *)string;```





## 判断是否是float类型
```bash
- (BOOL)isPureFloat:(NSString*)string{      
    NSScanner* scanner = [NSScanner scannerWithString:string];    
    float floatVal;    
    return [scanner scanFloat:&floatVal] && [scanner isAtEnd];
}
```

## 判断是否是int类型
``` bash
- (BOOL)isPureInt:(NSString*)string{    
NSScanner* scanner = [NSScanner scannerWithString:string];    
int intVal;    
return [scanner scanInt:&intVal] && [scanner isAtEnd];
}
```


## 方法使用
``` bash
NSString * numStr = @"a1b2c3d4e5f6“；
NSScanner * scanner = [NSScanner scannerWithString：numStr];
NSCharacterSet * numSet = [NSCharacterSet decimalDigitCharacterSet];
while （NO == [scanner isAtEnd]） {
    if （[scanner scanUpToCharacterFromSet：numSet intoString：NULL]） {
        int num;
        if （[scanner scanInt：&num]） {
            NSLog（@"num ： %d”，num）;
        }
    }
}
结果是： num ： 1
        num ： 2
        num ： 3
        num ： 4
        num ： 5
        num ： 6
```

## 读取下一行

``` bash
[scanner scanCharactersFromSet:[NSCharacterSet newlineCharacterSet]  intoString:NULL]; 
```


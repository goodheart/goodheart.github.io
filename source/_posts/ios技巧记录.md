title: ios技巧记录
date: 2015-09-18 16:51:39
tags:
---

### RGB颜色值转换成UIColor值
``` bash
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
```

### 多方法调用技巧
``` bash
@implementation Copy
- (instancetype)init
{
    self = [super init];
    if (self) {
	        SEL selectors[] = {
	                          @selector(cancel),
                            @selector(add),
                          @selector(update),
					          };
						        
        unsigned int selectorSize = sizeof(selectors);
        unsigned int selSize = sizeof(SEL);
        unsigned int index = arc4random_uniform(selectorSize / selSize);
       if (index < selectorSize / selSize) {
            void(*imp1)(id,SEL) = (typeof imp1)[self methodForSelector:selectors[index]];
            imp1(self,selectors[index]);
        }
    }
	    return self;
}
- (void)cancel{
    NSLog(@"%@",NSStringFromSelector(_cmd));
}
- (void)add{
    NSLog(@"%@",NSStringFromSelector(_cmd));
}
- (void)update{
     NSLog(@"%@",NSStringFromSelector(_cmd));
}

@end
```

### 不支持GC内存管理，会有错误提示
``` bash
#ifdef __OBJC_GC__
#error SDWebImage does not support Objective-C Garbage Collection
#endif
```

### 只支持ARC
``` bash
#if !__has_feature(objc_arc)
#error SDWebImage is ARC only. Either turn on ARC for the project or use -fobjc-arc flag
#endif
```

### 检测最小支持系统版本
``` bash
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_5_0
#error SDWebImage doesn't support Deployement Target version < 5.0
#endif
```

### 判断运行系统环境
``` bash
#if !TARGET_OS_IPHONE
#import <AppKit/AppKit.h>
#ifndef UIImage
#define UIImage NSImage
```


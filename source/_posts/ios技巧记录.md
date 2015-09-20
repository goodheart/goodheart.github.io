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

### 使用宏定义根据传入的参数动态生成方法进行调用
``` bash
 #define Print（func,content） \
（{ \
    [self Print##func：content]; \
    [self Print##func：content]; \
}）
- （id)init {
   self = [super init];
   if （self） {
       Print（B,“hehe”);
       Print（A,“haha”);
   }
    return self;
}

- （void）PrintA:（NSString *)content {
}
- （void）PrintB:（NSString *)content {
}
注：#  把传递过来的参数当成字符串进行替代
   ## 功能是在带参数的宏定义中将两个子串(token)联接起来，从而形成一个新的子串
```

###  为了能使Xcode能编译C++代码，需要对项目进行配置:
``` bash
Xcode --〉Project --〉Build Settings --〉搜索Compile Sources As ,并将其设置成Objective C++
```

### Cocoapods引入本地库： 
```bash
pod 'SDURLCache', ：path=>‘/Users/janema/Github/SDURLCache/SDURLCache.podspec'
```

### 给objc类些hash方法
``` bash
如该类有:name,imageName,items三个属性
那么该类的hash方法可以写成:
- (NSUInteger）hash {
   return [self.name hash] ^ [self.imageName hash]  ^ [self.items hash];
}
该方法借鉴于: https://github.com/goodheart/issue-13-viper/Modules/List/User Interface/Presenter/VTDUpcomingDisplaySection类的hash方法
```

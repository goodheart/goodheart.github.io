//
//  NSBundle+SNHBundle.h
//  SNHFoundation
//
//  Created by majian on 16/5/6.
//  Copyright © 2016年 majian. All rights reserved.
//

#import <Foundation/Foundation.h>
#if __has_include(<SNHFoundation/SNHFoundation.h>)
    #import <SNHFoundation/NSString+SNHString.h>
#else
    #import "NSString+SNHString.h"
#endif

NS_ASSUME_NONNULL_BEGIN

/*
 main bundle的文件夹地址
 */
extern NSString * SNHMainBundleResourcePath();

/*
 获取 main bundle 中文件地址
 */
extern NSString * SNHMainBundleResourcePathForFile(NSString * fileName);

@interface NSBundle (SNHBundle)

/*!
 *  获取包内私有bundle
 *  @param bundleName bundle名称，不需要路径
 *  @return 对应的bundle
 */
+ (NSBundle *)snh_privateBundleWithName:(NSString *)bundleName;

- (NSString *)snh_name;

+ (NSString *)snh_cachesPath;

+ (NSString *)snh_documentsPath;

+ (NSString *)snh_temporaryPath;

+ (NSString *)snh_libraryPath;

@end
NS_ASSUME_NONNULL_END

//
//  NSURL+SNHURL.h
//  Pods
//
//  Created by majian on 16/6/20.
//
//

#import <Foundation/Foundation.h>
#if __has_include(<SNHFoundation/SNHFoundation.h>)
    #import <SNHFoundation/NSObject+SNHObject.h>
#else
    #import "NSObject+SNHObject.h"
#endif

NS_ASSUME_NONNULL_BEGIN
@interface NSURL (SNHURL)

+ (NSURL *)snh_urlWithPath:(NSString *)path;

- (NSString *)snh_toString; //absoluteString

- (BOOL)snh_isEqualToURL:(NSURL *)url;

/*
 结果与self.relativePath相同
 */
- (NSString *)snh_trimSchema;

/**
 是否是文件夹
 */
- (BOOL)snh_isDirectoryError:(NSError **)error;

/**
 是否是文件
 */
- (BOOL)snh_isFileError:(NSError **)error;

/**
  是否是可执行文件
 */
- (BOOL)snh_isExecuteError:(NSError **)error;

/**
 是否是隐藏文件
 */
- (BOOL)snh_isHiddenError:(NSError **)error;

- (NSDictionary *)snh_queryDictionary;

@end
NS_ASSUME_NONNULL_END

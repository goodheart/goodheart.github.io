//
//  NSFileManager+SNHFoundationAdd.h
//  Pods
//
//  Created by majian on 2017/4/10.
//
//

#import <Foundation/Foundation.h>
#if __has_include(<SNHFoundation/SNHFoundation.h>)
    #import <SNHFoundation/NSObject+SNHObject.h>
#else
    #import "NSObject+SNHObject.h"
#endif

/**
 支持将多个路径字符串合并成完整路径
 headerPath: 路径前缀
 ... : 文件夹名字,必须以nil结尾
 */
extern NSString * SNHToCompleteFilePath(NSString *headerPath, ...) NS_REQUIRES_NIL_TERMINATION;

@interface NSFileManager (SNHFoundationAdd)

/*
 磁盘总空间
 */
+ (unsigned long long)snh_diskTotalSpace;

/*
 磁盘可用剩余空间
 */
+ (unsigned long long)snh_diskFreeSpace;

#pragma makr - 文件操作相关
/**
 创建文件夹的简便方法
 如果不存在，创建
 */
- (BOOL)createDirectoryAtPath:(NSString *)path error:(NSError **)error;

@end

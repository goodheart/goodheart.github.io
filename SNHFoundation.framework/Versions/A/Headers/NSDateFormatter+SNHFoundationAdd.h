//
//  NSDateFormatter+SNHFoundationAdd.h
//  Pods
//
//  Created by majian on 2017/4/18.
//
//

#import <Foundation/Foundation.h>

@interface NSDateFormatter (SNHFoundationAdd)

/**
 获取到 dateformat 为 yyyy-MM-dd HH:mm:ss 的dateFormatter
 */
+ (instancetype)sharedInstance1;

/**
 获取到 dateformat 为 yyyy-MM-dd HH:mm:ss.SSS 的dateFormatter
 */
+ (instancetype)sharedInstance2;

@end

@interface NSString (SNHDateFormatterAdd)

/**
 将格式为 yyyy-MM-dd HH:mm:ss 的字符串转成 NSDate
 */
- (NSDate *)snh_toDate1;

/**
 将格式为 yyyy-MM-dd HH:mm:ss.SSS 的字符串转成 NSDate
 */
- (NSDate *)snh_toDate2;

/**
 将格式为 yyyy-MM-dd HH:mm:ss 的字符串转成 时间戳
 */
- (NSString *)snh_toTimestamp1;

/**
 将格式为 yyyy-MM-dd HH:mm:ss.SSS 的字符串转成 时间戳
 */
- (NSString *)snh_toTimestamp2;

@end

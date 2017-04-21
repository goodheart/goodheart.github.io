//
//  NSScanner+SNHFoundationAdd.h
//  Pods
//
//  Created by majian on 2017/4/18.
//
//

#import <Foundation/Foundation.h>

@interface NSScanner (SNHFoundationAdd)



@end

@interface NSString (SNHScannerAdd)

/*!
 *  是否是整数
 */
- (BOOL)snh_isIntegerValue;

/*!
 *  是否是小数
 */
- (BOOL)snh_isFloatValue;

/**
 是否是 纯字符串
 */
- (BOOL)snh_isAllString;

/**
 是否 全是大写字母
 */
- (BOOL)snh_isAllUpperString;

/**
 是否 全是大写字母
 */
- (BOOL)snh_isAllLowerString;

/**
 根据对应的 charSet 匹配字符串
 */
- (NSString *)snh_scanStringWithSet:(NSCharacterSet *)charSet;


@end


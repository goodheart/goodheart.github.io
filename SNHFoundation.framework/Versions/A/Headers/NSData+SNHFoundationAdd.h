//
//  NSData+SNHFoundationAdd.h
//  Pods
//
//  Created by majian on 2017/4/11.
//
//

#import <Foundation/Foundation.h>

@interface NSData (SNHFoundationAdd)

/**
 字符串 转 data
 */
+ (NSData *)snh_dataWithBytesString:(NSString *)bytesString;

/**
 data 转 字符串
 */
- (NSString *)snh_bytesString;

@end

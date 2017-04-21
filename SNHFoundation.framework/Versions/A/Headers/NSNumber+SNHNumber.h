//
//  NSNumber+SNHNumber.h
//  Pods
//
//  Created by majian on 16/6/6.
//
//

#import <Foundation/Foundation.h>
#if __has_include(<SNHFoundation/SNHFoundation.h>)
    #import <SNHFoundation/NSScanner+SNHFoundationAdd.h>
    #import <SNHFoundation/NSObject+SNHObject.h>
#else
    #import "NSScanner+SNHFoundationAdd.h"
    #import "NSObject+SNHObject.h"
#endif

NS_ASSUME_NONNULL_BEGIN
extern NSNumber * const SNHNoNilNumber(NSNumber *number);

@interface NSNumber (SNHNumber)

/**
 *  判断两个number是否相等
 *  为了解决原生方法isEqualToNumber:传入参数为nil时崩溃的问题
 *  错误信息：-[__NSCFNumber compare:]: nil argument
 */
- (BOOL)snh_isEqualToNumber:(NSNumber *)aNumber;

- (NSString *)snh_numberByAppendingString:(NSString *)aString;
//- (NSString *)stringByAppendingFormat:(NSString *)format, ... NS_FORMAT_FUNCTION(1,2);

- (NSNumber *)snh_toNumber;
- (NSString *)snh_toString;

- (NSString *)snh_toSimpleNumber;


@end
NS_ASSUME_NONNULL_END

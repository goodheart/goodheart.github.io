//
//  NSObject+SNHObject.h
//  Pods
//
//  Created by majian on 16/6/6.
//
//

#import <Foundation/Foundation.h>
#if __has_include(<SNHFoundation/SNHFoundation.h>)
    #import <SNHFoundation/NSException+SNHException.h>
#else
    #import "NSException+SNHException.h"
#endif

NS_ASSUME_NONNULL_BEGIN
/*!
 *  是否是空对象
 */
extern BOOL SNHIsEmpty(id obj);

/*!
 *  不是空对象
 */
extern BOOL SNHIsNotEmpty(id obj);

extern NSString * SNHAvoidCrashExceptionNotification;
@interface NSObject (SNHObject)

+ (void)exchangeClassMethod:(Class)aClass method:(SEL)oriMethod toMethod:(SEL)newMethod;
+ (void)exchangeClassMethod:(SEL)oriMethod toMethod:(SEL)newMethod;

+ (void)exchangeInstanceMethod:(Class)aClass method:(SEL)oriMethod toMethod:(SEL)newMethod;
+ (void)exchangeInstanceMethod:(SEL)oriMethod toMethod:(SEL)newMethod;

+ (void)notiException:(NSException *)exception appendingInfo:(NSString * _Nullable)info;
- (void)notiException:(NSException *)exception appendingInfo:(NSString * _Nullable)info;

#pragma mark - 类型判断
- (BOOL)snh_isNSDictionary;
- (BOOL)snh_isNSArray;
- (BOOL)snh_isNSString;
- (BOOL)snh_isNSNumber;
- (BOOL)snh_isNSNumberBool;
- (BOOL)snh_isNSDate;
- (BOOL)snh_isNSNull;
- (BOOL)snh_isUIViewController;
- (BOOL)snh_isUINavigationController;

#pragma mark - 转换
- (NSString *)snh_toString;
- (NSNumber *)snh_toNumber;

@end
NS_ASSUME_NONNULL_END

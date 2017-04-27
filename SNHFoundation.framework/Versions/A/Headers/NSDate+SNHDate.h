//
//  NSDate+SNHDate.h
//  Pods
//
//  Created by majian on 16/6/7.
//
//

#import <Foundation/Foundation.h>
#if __has_include(<SNHFoundation/SNHFoundation.h>)
    #import <SNHFoundation/NSDate+SNHTimeStamp.h>
#else
    #import "NSDate+SNHTimeStamp.h"
#endif
NS_ASSUME_NONNULL_BEGIN
@interface NSDate (SNHDate)

+ (NSDate *)snh_date;

/*!
 *  当前时间戳,13位
 */
+ (long long)snh_currentTimeStamp13;

/*!
 *  当前时间戳,10位
 */
+ (long long)snh_currentTimeStamp10;

/**
 @timestamp 时间戳
 @result    当天: 今天8:00      昨天: 11:11  前天以前: 12.4 11:11
 */
+ (NSString *)snh_toRegularTime:(NSString *)timestamp;

+ (NSString *)snh_tofutureTime:(NSString *)timestamp;


@end

@interface NSString (SNHDateTime)

/**
 *  将字符串转成 00:00:00
 */
@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSString * _Nonnull convertToTime;

- (NSString *)snh_toRegularTime;

@end
NS_ASSUME_NONNULL_END

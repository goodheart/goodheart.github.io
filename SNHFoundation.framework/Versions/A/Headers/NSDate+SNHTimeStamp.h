//
//  NSDate+SNHTimeStamp.h
//  时间戳相关处理
//
//  Created by majian on 16/6/7.
//
//

#import <Foundation/Foundation.h>
#if __has_include(<SNHFoundation/SNHFoundation.h>)
    #import <SNHFoundation/SNHDateEnum.h>
    #import <SNHFoundation/NSDate+SNHDate.h>
    #import <SNHFoundation/NSString+SNHString.h>
#else
    #import "SNHDateEnum.h"
    #import "NSDate+SNHDate.h"
    #import "NSString+SNHString.h"
#endif

NS_ASSUME_NONNULL_BEGIN
@interface NSDate (SNHTimeStamp)

//根据时间戳取 年 月 日 小时 分钟
//计算时间戳之间差值 ok
//计算当前时间和传入的时间戳的差值
//将时间戳转换成NSDate
//根据传入的时间戳判断是否是今天 昨天 明天

@property (nonatomic,assign,readonly) NSInteger snh_year;
@property (nonatomic,assign,readonly) NSInteger snh_month;
@property (nonatomic,assign,readonly) NSInteger snh_day;
@property (nonatomic,assign,readonly) NSInteger snh_hour;
@property (nonatomic,assign,readonly) NSInteger snh_minute;
@property (nonatomic,assign,readonly) NSInteger snh_second;
@property (nonatomic,assign,readonly) NSInteger snh_dayOfWeek; /* 一周中的第几天，周日为第一天*/
@property (nonatomic,assign,readonly) NSInteger snh_weekOfYear; /* 一年中的第几周*/

/**
 *  将时间戳转为NSDate
 */
+ (NSDate *)snh_dateWithTimeStamp:(NSString *)timeStamp;

/**
 *  是否是今天
 */
+ (BOOL)snh_isTodayWithTimeStamp:(NSString *)timeStamp;
+ (BOOL)snh_isTodayWithDate:(NSDate *)date;
- (BOOL)snh_isToday;

/**
 *  是否是昨天
 */
+ (BOOL)snh_isYesterdayWithTimeStamp:(NSString *)timeStamp;
+ (BOOL)snh_isYesterdayWithDate:(NSDate *)date;
- (BOOL)snh_isYesterday;

/**
 *  是否是明天
 */
+ (BOOL)snh_isTomorrowWithTimeStamp:(NSString *)timeStamp;
+ (BOOL)snh_isTomorrowWithDate:(NSDate *)date;
- (BOOL)snh_isTomorrow;

/**
 *  是否在同一个星期
 */
+ (BOOL)snh_isDateInWeekendWithTimeStamp:(NSString *)timeStamp;
+ (BOOL)snh_isDateInWeekendWithTimeStamp:(NSString *)aTimeStamp toTimeStamp:(NSString *)bTimeStamp;

/**
 *  是否是同一天
 */
+ (BOOL)snh_isSameDayWithTimeStamp:(NSString *)aTimeStamp toDay:(NSString *)bTimeStamp;
+ (BOOL)snh_isSameDayWithDate:(NSDate *)aDate toDay:(NSDate *)bDate;
- (BOOL)snh_isSameDayWithDate:(NSDate *)aDate;

/*!
 *  根据传入的时间戳计算时间间隔,用现在的时间减去传入的时间
 *  discussion : 如果传入的是10位，则返回间隔"秒",如果传入的是13位，则返回间隔是“微秒”
 */
+ (long long)snh_timeIntervalSinceTimeStamp:(NSString *)aTimeStamp;
/*!
 *  计算两个时间戳的差值: aTimeStamp - bTimeStamp
 */
+ (long long)snh_timeIntervalBetweenTimeStamp:(NSString *)aTimeStamp andTimeStamp:(NSString *)bTimeStamp;

@end

/*!
 *  出现错误时，返回该值
 */
extern NSUInteger SNH_kDefaultReturnTimeInterval;
NS_ASSUME_NONNULL_END

//
//  SNHDateEnum.h
//  Pods
//
//  Created by majian on 16/6/7.
//
//

#ifndef SNHDateEnum_h
#define SNHDateEnum_h

/*!
 *  时间戳格式
 */
typedef NS_ENUM(NSUInteger,SNHDateStyle) {
    /*!
     *  年
     */
    SNHDateStyleYear = 0,
    /*!
     *  月
     */
    SNHDateStyleMonth,
    /*!
     *  日
     */
    SNHDateStyleDay,
    /*!
     *  小时
     */
    SNHDateStyleHour,
    /*!
     *  分钟
     */
    SNHDateStyleMinute,
    /*!
     *  秒
     */
    SNHDateStyleSecond,
    /*!
     *  毫秒
     */
    SNHDateStyleMSec
};

/*!
 *  时间日期格式
 */
typedef NS_ENUM(NSUInteger,SNHDateFormatStyle) {
    /*!
     *  2015-10-08 12:30:40
     */
     SNHDateFormatStyleNormal = 0,
    /*!
     *  20151008123040
     */
     SNHDateFormatStyleNoSegment,
    /*!
     *  2015/10/08 12:30:40
     */
     SNHDateFormatStyleDiagonal
};

/*!
 *  日期通俗表示类型
 */
typedef NS_ENUM(NSUInteger,SNHDateDayStyle) {
    /*!
     *  不是前天、昨天、今天、明天、后天的情况
     */
    SNHDateDayStyleNoKnown,
    /*!
     *  前天
     */
    SNHDateDayStyleBeforeYesterday,
    /*!
     *  昨天
     */
    SNHDateDayStyleYesterday,
    /*!
     *  今天
     */
    SNHDateDayStyleToday = 0,
    /*!
     *  明天
     */
    SNHDateDayStyleTomorrow,
    /*!
     *  后天
     */
    SNHDateDayStyleAfterTomorrow
};

/*!
 *  秒级的长度
 */
extern unsigned int SNH_kTimeStampSecondLength;

/*!
 *  毫秒级的长度
 */
extern unsigned int SNH_kTimeStampMilliSecondLength;

/*!
 *  是否是正常的时间戳（字符串)
 */
extern BOOL SNH_IsNormalTimeStampString(NSString * aTimeStamp);

/*!
 *  是否是正常的时间戳(NSNumber型)
 */
extern BOOL SNH_IsNormalTimeStampNumber(NSNumber * aTimeStamp);
#endif /* SNHDateEnum_h */








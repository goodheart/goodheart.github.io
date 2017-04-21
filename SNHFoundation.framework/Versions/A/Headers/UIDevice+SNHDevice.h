//
//  UIDevice+SNHDevice.h
//  Pods
//
//  Created by majian on 16/6/7.
//
//

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
/*!
 *  是否是模拟器
 */
extern BOOL SNHIsSimulater();

/*!
 *  是否是真机
 */
extern BOOL SNHIsPhysical();

/*!
 *  是否是单元测试
 */
extern BOOL SNHIsRunningTests();

@interface UIDevice (SNHDevice)

/*!
 *  iOS系统版本
 */
+ (CGFloat)snh_systemVersion;

+ (BOOL)snh_greaterThan:(NSString *)sysVer;
+ (BOOL)snh_lessThan:(NSString *)sysVer;

/**!
  * 系统大于6.0
  */
+ (BOOL)snh_greaterThan6;
/**!
  * 系统版本小于6.0
  */
+ (BOOL)snh_lessThan6;

/**! 
  * 系统大于7.0
  */
+ (BOOL)snh_greaterThan7;
/**! 
  * 系统版本小于7.0
  */
+ (BOOL)snh_lessThan7;

/**!
  * 系统大于8.0
  */
+ (BOOL)snh_greaterThan8;
/**!
  * 系统版本小于8.0
  */
+ (BOOL)snh_lessThan8;

/**!
  * 系统大于9.0
  */
+ (BOOL)snh_greaterThan9;
/**!
  * 系统版本小于9.0
  */
+ (BOOL)snh_lessThan9;

/**!
 * 系统大于10.0
 */
+ (BOOL)snh_greaterThan10;
/**!
 * 系统版本小于10.0
 */
+ (BOOL)snh_lessThan10;

/*!
 *  是否是模拟器
 */
+ (BOOL)snh_isSimulator;

/*!
 *  是否是真机
 */
+ (BOOL)snh_isPhysical;

/**
 *  设置当前设备横竖屏方向
 */
+ (void)snh_setDeviceOrientation:(UIInterfaceOrientation)orientation;

/**
 *  强制横屏
 */
+ (void)snh_setDeviceOrientationLandscapeRight;

/**
 *  强制竖屏
 */
+ (void)snh_setDeviceOrientationPortrait;

#pragma mark - 控制app界面的横竖屏
/**
 可以横竖屏切换
 */
+ (void)allowOrientationAll;


/**
 只能横屏
 */
+ (void)allowOrientationOnlyLandscape;

/**
 只能竖屏
 */
+ (void)allowOrientationOnlyPortrait;
@property (nonatomic,assign,readonly) UIInterfaceOrientationMask snh_orientation;

#pragma mark - 设备信息
+ (NSString*)snh_machine;

+ (NSString*)snh_model;

+ (NSString*)snh_cpu;

+ (NSInteger)snh_byteorder;

+ (NSString*)snh_architecture;

+ (NSString*)kernelVersion;

+ (NSString*)kernelRelease;

+ (NSString*)kernelRevision;

+ (NSString*)snh_systemVersionPatch;

@end
NS_ASSUME_NONNULL_END

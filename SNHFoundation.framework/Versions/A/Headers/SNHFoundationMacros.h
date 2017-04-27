//
//  SNHFoundationMacros.h
//  Pods
//
//  Created by majian on 16/6/6.
//
//

#ifndef SNHFoundationMacros_h
#define SNHFoundationMacros_h

#define SNHInvokeBlock(block) if(block) { block();}

/*!
 *  主线程_异步_执行
 */
#define snh_dispatch_async_main_execute(block) \
    if ([NSThread isMainThread]) { \
        block(); \
    } else { \
        dispatch_async(dispatch_get_main_queue(), block); \
    }

/*!
 *  主线程_同步_执行
 */
#define snh_dispatch_sync_main_execute(block) \
    if ([NSThread isMainThread]) { \
        block(); \
    } else { \
        dispatch_sync(dispatch_get_main_queue(), block); \
    }

#define kSNHCreateExternString(key) extern NSString * const key ;
#define kSNHImplementionExtern(key,value) NSString * const key = value ;

#define SNHLog(format, ...) NSLog((@"\nfunc:%s" "line:%d\n" "💬" format "\n\n"), __FUNCTION__, __LINE__, ##__VA_ARGS__)

#define SNHLogFunc NSLog((@"\nfunc:%s" "line:%d\n" "\n"), __FUNCTION__, __LINE__)

// result macro
#define SNHLogBOOL(BOOL) NSLog((@"\nfunc:%s" "line:%d\n" "%@" "\n\n"), __FUNCTION__, __LINE__, BOOL ? @"🔵Success" : @"🔴Fail")

#define SNHLogSuccess(format, ...) NSLog((@"\nfunc:%s" "line:%d\n" "🔵success: " format "\n\n"), __FUNCTION__, __LINE__, ##__VA_ARGS__)

#define SNHLogFail(format, ...) NSLog((@"\nfunc:%s" "line:%d\n" "🔴error: " format "\n\n"), __FUNCTION__, __LINE__, ##__VA_ARGS__)

//#define SNHLogError(NSError) NSLog((@"\nfunc:%s" "line:%d\n" "🔴%@" "\n\n"), __FUNCTION__, __LINE__, NSError.localizedDescription)


// obj macro
#define ATLogOBJ(NSObject) NSLog((@"\nfunc:%s" "line:%d\n" "💬%@" "\n\n"), __FUNCTION__, __LINE__, NSObject)


// CG macro
#define SNHLogNSInteger(NSInteger) NSLog((@"\nfunc:%s" "line:%d\n" "💬%ld" "\n\n"), __FUNCTION__, __LINE__, NSInteger)
#define SNHLogNSUInteger(NSUInteger) NSLog((@"\nfunc:%s" "line:%d\n" "💬%lld" "\n\n"), __FUNCTION__, __LINE__, NSUInteger)

#define SNHLogCGFloat(CGFloat) NSLog((@"\nfunc:%s" "line:%d\n" "💬%f" "\n\n"), __FUNCTION__, __LINE__, CGFloat)
#define SNHLogCGPoint(CGPoint) NSLog((@"\nfunc:%s" "line:%d\n" "💬%@" "\n\n"), __FUNCTION__, __LINE__, NSStringFromCGPoint(CGPoint))

#define SNHLogCGSize(CGSize) NSLog((@"\nfunc:%s" "line:%d\n" "💬%@" "\n\n"), __FUNCTION__, __LINE__, NSStringFromCGSize(CGSize))
#define SNHLogCGRect(CGRect) NSLog((@"\nfunc:%s" "line:%d\n" "💬%@" "\n\n"), __FUNCTION__, __LINE__, NSStringFromCGRect(CGRect))


#endif /* SNHFoundationMacros_h */

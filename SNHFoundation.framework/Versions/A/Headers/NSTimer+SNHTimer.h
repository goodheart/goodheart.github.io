//
//  NSTimer+SNHTimer.h
//  Pods
//
//  Created by majian on 2016/11/23.
//
//

#import <Foundation/Foundation.h>
#if __has_include(<SNHFoundation/SNHFoundation.h>)
    #import <SNHFoundation/SNHTimerProxy.h>
#else
    #import "SNHTimerProxy.h"
#endif


NS_ASSUME_NONNULL_BEGIN
@interface NSTimer (SNHTimer)

+ (NSTimer *)snh_scheduledTimerWithTimeInterval:(NSTimeInterval)ti target:(id)aTarget selector:(SEL)aSelector userInfo:(nullable id)userInfo repeats:(BOOL)yesOrNo;

- (void)snh_invalidate;

@end
NS_ASSUME_NONNULL_END

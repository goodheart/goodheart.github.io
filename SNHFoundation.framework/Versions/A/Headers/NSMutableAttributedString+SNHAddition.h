//
//  NSMutableAttributedString+SNHAddition.h
//  PocketFans201611
//
//  Created by majian on 2016/11/18.
//  Copyright © 2016年 majian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#if __has_include(<SNHFoundation/SNHFoundation.h>)
    #import <SNHFoundation/NSAttributedString+SNHAddition.h>
    #import <SNHFoundation/NSString+SNHString.h>
    #import <SNHFoundation/NSObject+SNHObject.h>
#else
    #import "NSAttributedString+SNHAddition.h"
    #import "NSString+SNHString.h"
    #import "NSObject+SNHObject.h"
#endif

NS_ASSUME_NONNULL_BEGIN
@interface NSMutableAttributedString (SNHAddition)

- (void)snh_addAttribute:(NSString *)name value:(id)value range:(NSRange)range;

- (void)snh_addForeColorAttributeWithValue:(UIColor *)color;
- (void)snh_addForeColorAttributeWithValue:(UIColor *)color range:(NSRange)range;

- (void)snh_addFontAttributeWithValue:(UIFont *)font;
- (void)snh_addFontAttributeWithValue:(UIFont *)font range:(NSRange)range;

@end
NS_ASSUME_NONNULL_END

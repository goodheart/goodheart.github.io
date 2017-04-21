//
//  NSAttributedString+SNHAddition.h
//  PocketFans201611
//
//  Created by majian on 2016/11/18.
//  Copyright © 2016年 majian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface NSAttributedString (SNHAddition)

- (NSRange)snh_allRange;

- (BOOL)snh_isValidRange:(NSRange)range;
- (BOOL)snh_isInvalidRange:(NSRange)range;

- (NSDictionary<NSString *,id> *)snh_attributes;

- (NSMutableAttributedString *)snh_toMutableAttributedString;

@end
NS_ASSUME_NONNULL_END

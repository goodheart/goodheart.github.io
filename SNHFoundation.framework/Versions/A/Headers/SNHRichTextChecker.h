//
//  SNHRichTextChecker.h
//  Pods
//
//  Created by majian on 2016/11/28.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#if __has_include(<SNHFoundation/SNHFoundation.h>)
    #import <SNHFoundation/NSArray+SNHArray.h>
    #import <SNHFoundation/NSString+SNHString.h>
    #import <SNHFoundation/NSMutableAttributedString+SNHAddition.h>
#else
    #import "NSArray+SNHArray.h"
    #import "NSString+SNHString.h"
    #import "NSMutableAttributedString+SNHAddition.h"
#endif
extern NSString * SNHRichTextCheckerValue;
extern NSString * SNHRichTextCheckerType;
extern NSString * SNHRichTextCheckerTypeWebLink;
extern NSString * SNHRichTextCheckerTypePhone;
extern NSString * SNHRichTextCheckerTypeAtMember;

NS_ASSUME_NONNULL_BEGIN
/**
 富文本内容检测
 */
@interface SNHRichTextChecker : NSObject

@property (nonatomic,strong) UIColor * webLinkColor; //网页链接
@property (nonatomic,strong) UIColor * phoneColor; //电话号码
@property (nonatomic,strong) UIColor * memberAtColor; //@成员

@property (nonatomic,copy) NSString *(^imageNameForEmotionHandler)(NSString *emotionName);


- (NSAttributedString *)checkWebLinkWithAttributedString:(NSAttributedString *)attributedString;
- (NSAttributedString *)checkPhoneLinkWithAttributedString:(NSAttributedString *)attributedString;
- (NSAttributedString *)checkEmotionsWithAttributedString:(NSAttributedString *)attributedString;
- (NSAttributedString *)checkMemberAtLinkWithAttributedString:(NSAttributedString *)attributedString;

@end

@interface NSAttributedString (SNHRichTextCheckerAddition)

- (BOOL)snh_isWebLink;

- (BOOL)snh_isPhone;

- (BOOL)snh_isEmotion;

- (BOOL)snh_isMember;

@end

@interface NSMutableAttributedString (SNHRichTextCheckerAddition)

- (void)snh_addRichTextCheckerTypeWithValue:(NSString *)value range:(NSRange)aRange;
- (void)snh_addRichTextCheckerValueWithValue:(NSString *)value range:(NSRange)aRange;

@end
NS_ASSUME_NONNULL_END

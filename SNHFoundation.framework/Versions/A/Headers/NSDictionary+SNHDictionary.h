//
//  NSDictionary+SNHDictionary.h
//  Pods
//
//  Created by majian on 16/6/6.
//
//

#import <Foundation/Foundation.h>
#if __has_include(<SNHFoundation/SNHFoundation.h>)
    #import <SNHFoundation/NSObject+SNHObject.h>
#else
    #import "NSObject+SNHObject.h"
#endif

NS_ASSUME_NONNULL_BEGIN
/*!
 *  是否是空字典
 */
extern BOOL SNHIsEmptyDictionary(NSDictionary *dict);

/*!
 *  不是空字典
 */
extern BOOL SNHIsNotEmptyDictionary(NSDictionary *dict);


extern NSDictionary * const SNHNoNilDictionary(NSDictionary * dict);

@interface NSDictionary (SNHDictionary)

/**
 从main bundle中读取plist
 */
+ (NSDictionary *)snh_dictionaryWithFileName:(NSString *)fileName;

- (BOOL)snh_containsKey:(id<NSCopying>)key;

@end
NS_ASSUME_NONNULL_END

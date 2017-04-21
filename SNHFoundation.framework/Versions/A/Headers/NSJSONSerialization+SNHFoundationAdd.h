//
//  NSJSONSerialization+SNHFoundationAdd.h
//  Pods
//
//  Created by majian on 2017/4/8.
//
//

#import <Foundation/Foundation.h>
#if __has_include(<SNHFoundation/SNHFoundation.h>)
    #import <SNHFoundation/NSString+SNHString.h>
#else
    #import "NSString+SNHString.h"
#endif

@interface NSJSONSerialization (SNHFoundationAdd)
+ (id)JSONObjectWithString:(NSString *)string
                     error:(NSError **)error;
+ (NSString *)stringWithJSONObject:(id)obj
                             error:(NSError **)error;

+ (NSDictionary *)dictionaryWithString:(NSString *)string error:(NSError **)error;
+ (NSArray *)arrayWithString:(NSString *)string error:(NSError **)error;

@end

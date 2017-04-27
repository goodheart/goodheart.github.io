//
//  NSUserDefaults+SNHFoundationAdd.h
//  Pods
//
//  Created by majian on 2017/4/18.
//
//

#import <Foundation/Foundation.h>

@interface NSUserDefaults (SNHFoundationAdd)

+ (void)snh_setObject:(id)obj forKey:(NSString *)key;

+ (id)snh_objectForKey:(NSString *)key;

@end

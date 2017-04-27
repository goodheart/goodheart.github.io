//
//  NSSet+SNHFoundationAdd.h
//  Pods
//
//  Created by majian on 2017/4/11.
//
//

#import <Foundation/Foundation.h>
#if __has_include(<SNHFoundation/SNHFoundation.h>)
    #import <SNHFoundation/NSObject+SNHObject.h>
    #import <SNHFoundation/NSArray+SNHArray.h>
#else
    #import "NSObject+SNHObject.h"
    #import "NSArray+SNHArray.h"
#endif

extern BOOL SNHIsEmptySet(NSSet *set);
extern BOOL SNHIsNotEmptySet(NSSet *set);

@interface NSSet (SNHFoundationAdd)

- (NSArray *)snh_toArray;

- (NSMutableArray *)snh_toMutableArray;

- (NSSet *)snh_removeObject:(id)obj;

@end

//
//  NSHTTPCookieStorage+SNHFoundationAdd.h
//  Pods
//
//  Created by majian on 2017/4/10.
//
//

#import <Foundation/Foundation.h>
#if __has_include(<SNHFoundation/SNHFoundation.h>)
    #import <SNHFoundation/NSString+SNHString.h>
    #import <SNHFoundation/NSArray+SNHArray.h>
#else
    #import "NSString+SNHString.h"
    #import "NSArray+SNHArray.h"
#endif

@interface NSHTTPCookieStorage (SNHFoundationAdd)

- (void)snh_removeCookiesForDomain:(NSString *)domain;

- (void)snh_removeCookiesForDomains:(NSArray*)domains;

@end

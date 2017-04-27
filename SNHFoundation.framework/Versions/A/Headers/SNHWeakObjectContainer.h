//
//  SNHWeakObjectContainer.h
//  Pods
//
//  Created by majian on 16/10/16.
//
//

#import <Foundation/Foundation.h>

/**
 *  用户存放弱引用的对象,用于解决分类不能方便存放弱引用对象的问题
 */
@interface SNHWeakObjectContainer : NSObject

- (instancetype)initWithWeakObject:(__weak id)weakObj;

@property (nonatomic,weak) NSObject * weakObj;

@end

//
//  NSMutableArray+SNHMutableArray.h
//  Pods
//
//  Created by majian on 16/6/20.
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@protocol SNHNoNilObjectProtocol <NSObject>

+ (nonnull id)snh_noNilObject;

@end

@interface NSMutableArray (SNHMutableArray)

/**
 *  添加一个元素,如果传入的Obj为空，会自动添加一个相应cls非空的实例
 */
- (NSMutableArray *)snh_addObject:(_Nullable id)obj class:(_Nonnull Class)cls;

/**
 *  添加一个元素，如果传入的obj为空，则忽略
 */
- (NSMutableArray *)snh_addObject:(_Nullable id)obj;

/**
 移除第一个元素
 */
- (NSMutableArray *)snh_removeFirstObject;

/**
 移除最后一个元素
 */
- (NSMutableArray *)snh_removeLastObject;

/**
 在 index = 0 插入一个元素
 */
- (NSMutableArray *)snh_insertObjectAtFirst:(id)obj;

/**
 在数组的最后添加元素
 */
- (NSMutableArray *)snh_insertObjectAtLast:(id)obj;

@end
NS_ASSUME_NONNULL_END

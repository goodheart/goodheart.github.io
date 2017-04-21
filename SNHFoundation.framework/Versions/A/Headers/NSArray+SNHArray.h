//
//  NSArray+SNHArray.h
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
 *  是否是空数组
 */
extern BOOL SNHIsEmptyArray(NSArray *array);

/**
 *  不是空数组
 */
extern BOOL SNHIsNotEmptyArray(NSArray *array);

/*!
 *  防止出现空数组
 */
extern NSArray * SNHNoNilArray(id array);

@interface NSArray (SNHArray)

/*!
 *  删除存在的指定元素
 */
- (NSArray *)snh_removeObjectIfExists:(_Nonnull id)obj;

/*!
 *  删除指定索引的元素
 */
- (NSArray *)snh_removeObjectAtIndex:(NSInteger)index;

/**
 第一个元素
 */
- (id)snh_firstObject;

/**
 最后一个元素
 */
- (id)snh_lastObject;

/**
 移除第一个元素
 */
- (NSArray *)snh_removeFirstObject;
- (NSArray *)snh_removeLastObject;

/**
 在 index = 0 插入一个元素
 */
- (NSArray *)snh_insertObjectAtFirst:(id)obj;

/**
 在数组的最后添加元素
 */
- (NSArray *)snh_insertObjectAtLast:(id)obj;

/*!
 *  删除元素组
 */
- (NSArray *)snh_removeObjects:(NSArray *)objs;

/*!
 *  翻转数组：如：[@1,@2,@3] ====> [@3,@2,@1]
 */
@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSArray * _Nonnull snh_reversedObjects;

/**
 *  取到对应索引的对象，如果index越界会返回cls的实例
 */
- (id)snh_objectAtIndex:(NSInteger)index class:(Class)cls;

/**
 *  是否是有效的索引
 */
- (BOOL)snh_isValidIndex:(NSInteger)index;

/**
 NSArray ==> NSSet
 */
- (NSSet *)snh_toSet;
/**
 NSArray ==> NSMutableSett
 */
- (NSMutableSet *)snh_toMutableSet;

@end
NS_ASSUME_NONNULL_END








//
//  NSArray+SDKit.h
//  SDKit
//
//  Created by boai on 16/4/19.
//  Copyright (c) 2016年 boai. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 *  给NSArray类添加许多有用的方法
 */
@interface NSArray (SDKit)

/*!
 *  获取在安全模式下给定索引的对象（如果自身是空的则无）
 */
- (nullable id)safeObjectAtIndex:(NSUInteger)index;

/*!
 *  创建反向数组
 */
- (nullable NSArray *)reversedArray;

/*!
 *  转换成JSON的NSString
 */
- (nullable NSString *)arrayToJson;

/*!
 *  模拟阵列当作一个圆。当它超出范围，重新开始
 */
- (nullable id)objectAtCircleIndex:(NSInteger)index;

/*!
 *  将指定的数组创建反向数组
 */
+ (nullable NSArray *)reversedArray:(nullable NSArray *)array;

/*!
 *  将指定的数组转换成JSON的NSString
 */
+ (nullable NSString *)arrayToJson:(nullable NSArray *)array;

/*!
 *  取出随机的object
 */
- (nullable id)randomObject;

/*!
 *  取出指定index的object
 */
- (nullable id)objectOrNilAtIndex:(NSUInteger)index;


@end

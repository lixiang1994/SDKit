//
//  NSMutableArray+SDKit.m
//  SDKit
//
//  Created by boai on 16/4/19.
//  Copyright (c) 2016年 boai. All rights reserved.
//

#import "NSMutableArray+SDKit.h"
#import "NSArray+SDKit.h"

@implementation NSMutableArray (SDKit)

/* 获取在安全模式下给定索引的对象（如果自身是空的则无 */
- (id)safeObjectAtIndex:(NSUInteger)index
{
    if([self count] > 0 && [self count] > index)
        return [self objectAtIndex:index];
    else
        return nil;
}
/* 移动对象从一个索引到另一个索引 */
- (void)moveObjectFromIndex:(NSUInteger)from
                    toIndex:(NSUInteger)to
{
    if(to != from)
    {
        id obj = [self safeObjectAtIndex:from];
        // 删除集合指定的元素
        [self removeObjectAtIndex:from];
        
        if(to >= [self count])
            // 向集合添加元素
            [self addObject:obj];
        else
            // 向集合的指定位置插入一个元素
            [self insertObject:obj
                       atIndex:to];
    }
}

/* 创建反向数组 */
- (NSMutableArray *)reversedArray
{
    return (NSMutableArray *)[NSArray reversedArray:self];
}

/* 获取给定的键值和排序的数组 */
+ (NSMutableArray *)sortArrayByKey:(NSString *)key
                             array:(NSMutableArray *)array
                         ascending:(BOOL)ascending
{
    NSMutableArray *tempArray = [[NSMutableArray alloc] init];
    // 集合移除全部对象
    [tempArray removeAllObjects];
    // 向集合尾部添加指定集合
    [tempArray addObjectsFromArray:array];
    // 初始化一个指定键值和排序的排序描述器
    NSSortDescriptor *brandDescriptor = [[NSSortDescriptor alloc] initWithKey:key ascending:ascending];
    NSArray *sortDescriptors = [NSArray arrayWithObjects:brandDescriptor, nil];
    // 通过排序接收机对象返回一个新的数组
    NSArray *sortedArray = [tempArray sortedArrayUsingDescriptors:sortDescriptors];
    [tempArray removeAllObjects];
    tempArray = (NSMutableArray *)sortedArray;
    [array removeAllObjects];
    [array addObjectsFromArray:tempArray];
    
    return array;
}

@end

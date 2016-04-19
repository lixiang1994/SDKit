//
//  UIView+SDViewToolsBasic.h
//  SDKit
//
//  Created by gsd on 16/4/19.
//  Copyright © 2016年 gsd. All rights reserved.
//

#import <UIKit/UIKit.h>

/** 
 将你需要给category添加的实例属性直接添加到这里
 例：@property (nonatomic, strong) UIView *sd_leftBorder;
 调用方法：[self.sd_categoryPropertiesManager sd_leftBorder];
 */
@interface SDViewToolsCategoryPropertiesManager : NSObject


@end





@interface UIView (SDViewToolsBasic)

@property (nonatomic, readonly) SDViewToolsCategoryPropertiesManager *sd_categoryPropertiesManager;

@end

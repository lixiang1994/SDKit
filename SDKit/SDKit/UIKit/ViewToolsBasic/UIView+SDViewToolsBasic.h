//
//  UIView+SDViewToolsBasic.h
//  SDKit
//
//  Created by gsd on 16/4/19.
//  Copyright © 2016年 gsd. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface SDViewToolsCategoryPropertiesManager : NSObject

@end





@interface UIView (SDViewToolsBasic)

@property (nonatomic, readonly) SDViewToolsCategoryPropertiesManager *sd_categoryPropertiesManager;

@end

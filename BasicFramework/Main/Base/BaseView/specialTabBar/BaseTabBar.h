//
//  BaseTabBar.h
//  BasicFramework
//
//  Created by lizhao on 16/8/18.
//  Copyright © 2016年 lizhao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BaseTabBar;

@protocol BaseTabBarDelegate <NSObject>

@optional

- (void)tabBarMiddle_BTClick:(BaseTabBar *)tabBar;

@end


@interface BaseTabBar : UITabBar

@property (nonatomic, weak) id<BaseTabBarDelegate> myDelegate ;

@end

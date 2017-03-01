//
//  UIBarButtonItem+Extension.h
//  BasicFramework
//
//  Created by lizhao on 16/10/26.
//  Copyright © 2016年 lizhao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (Extension)

+ (UIBarButtonItem *)itemWithImageName:(NSString *)imageName highImageName:(NSString *)highImageName target:(id)target action:(SEL)action;

@end

//
//  NSTimer+Extension.h
//  BasicFramework
//
//  Created by lizhao on 2016/11/18.
//  Copyright © 2016年 lizhao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (Extension)

+(void)startTimingWithTimeInterval:(NSTimeInterval)t timerAction:(void(^)(NSTimer *timer,NSTimeInterval interval))timerAction;
-(void)stopTiming;

@end

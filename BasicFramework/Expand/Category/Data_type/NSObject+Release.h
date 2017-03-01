//
//  NSObject+Release.h
//  BasicFramework
//
//  Created by lizhao on 2016/11/10.
//  Copyright © 2016年 lizhao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Release)
#pragma mark - 监听对象释放时事件
- (void)addDeallocBlock:(void(^)(void))block;


@end

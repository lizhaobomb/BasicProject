//
//  UserModel.h
//  BasicFramework
//
//  Created by lizhao on 2016/12/19.
//  Copyright © 2016年 lizhao. All rights reserved.
//

#import <JSONModel/JSONModel.h>

@interface UserModel : JSONModel

//用户ID
@property(nonatomic,copy)NSString *UserID;
//用户姓名
@property(nonatomic,copy)NSString *UserName;

+(void)loginWithName:(NSString *)name PW:(NSString *)PW FinishedLogin:(void(^)(UserModel *model))FinishedLogin;

@end

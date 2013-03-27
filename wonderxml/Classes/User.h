//
//  User.h
//  FeeFactor
//
//  Created by Matri Ning on 15/05/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface User : NSObject

@property (nonatomic, assign) Boolean changePassword;
@property (nonatomic, copy) NSString *expiration;
@property (nonatomic, copy) NSString *lastAddress;
@property (nonatomic, copy) NSString *lastLogIn;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *preferences;
@property (nonatomic, copy) NSNumber *profileID;
@property (nonatomic, copy) NSString *settings;
@property (nonatomic, retain) NSNumber *userID;
@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *billingSchedule;
@property (nonatomic, copy) NSString *brandID;
@property (nonatomic, copy) NSString *billingEmailAddress;

@property (nonatomic, copy) NSMutableArray *permissions;


@end

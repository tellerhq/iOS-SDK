//
//  TLRRegistration.h
//  Teller
//
//  Created by Stevie Graham on 22/02/2018.
//  Copyright © 2018 Stevie Graham. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TLRRegistration : NSObject
+ (BOOL)isRegistered;
+ (void)beginRegistrationWithApplicationId:(NSString *)applicationId requestedPermissions:(NSDictionary *)permissions completionHandler:(void (^)(TLRRegistration *, NSError *))completionHandler;
+ (void)deleteRegistrationFromDevice;
@property (nonatomic) NSString * token;
@property (nonatomic) NSDictionary * permissions;
@end

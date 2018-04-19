//
//  TellerClient.h
//  Teller
//
//  Created by Stevie Graham on 20/10/2017.
//  Copyright © 2017 Stevie Graham. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface TLRClient : NSObject
+ (instancetype)sharedInstance;
- (void)get:(NSURL *)URL completionBlock:(void (^)(NSData * data, NSURLResponse * response, NSError * error))completionBlock;
- (void)put:(NSURL *)URL withEntity:(NSDictionary *)entity completionBlock:(void (^)(NSData * data, NSURLResponse * response, NSError * error))completionBlock;
- (void)requestWithURL:(NSURL *)URL withMethod:(NSString *)method entity:(NSDictionary *)entity signRequest:(BOOL)signRequest completionBlock:(void (^)(NSData * data, NSURLResponse * response, NSError * error))completionBlock;
@end

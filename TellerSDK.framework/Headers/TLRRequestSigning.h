//
//  TLRRequestSigning.h
//  Teller
//
//  Created by Stevie Graham on 13/03/2018.
//  Copyright © 2018 Stevie Graham. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TLRRequestSigning : NSObject
+ (NSMutableURLRequest *)signRequest:(NSURLRequest *)request;
@end

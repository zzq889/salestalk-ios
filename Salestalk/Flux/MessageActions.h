//
// Created by Zhang Zeqing on 3/29/15.
// Copyright (c) 2015 NYSNETECH. All rights reserved.
//

#import <Foundation/Foundation.h>

@class NTMessage;


@interface MessageActions : NSObject

+ (void)createMessage:(id)message;

+ (void)receiveAll:(id)rawMessages;

+ (void)markAsRead:(NTMessage *)message;
@end
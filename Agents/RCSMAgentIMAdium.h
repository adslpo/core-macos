//
//  RCSMAgentIMAdium.h
//  RCSMac
//
//  Created by Guido on 2/16/12.
//  Copyright 2012 HT srl. All rights reserved.
//
#import "RCSMInterface.h"

#import "RCSMInputManager.h"

#define ADIUM_MSG_SEND 0
#define ADIUM_MSG_RECEIVE 1


@interface myAIContentController : NSObject

- (void)myfinishSendContentObject: (id)arg1;
- (void)myfinishReceiveContentObject: (id)arg1;

@end

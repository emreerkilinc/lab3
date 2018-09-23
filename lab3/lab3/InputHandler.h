//
//  InputHandler.h
//  lab3
//
//  Created by emre on 2018-09-23.
//  Copyright © 2018 emre. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface InputHandler : NSObject;

+ (NSString *) getUserInputWithLength: (int) maxLength widthPrompt: (NSString *) prompt;

@end

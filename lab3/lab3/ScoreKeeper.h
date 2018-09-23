//
//  ScoreKeeper.h
//  lab3
//
//  Created by emre on 2018-09-23.
//  Copyright © 2018 emre. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ScoreKeeper : NSObject

@property (nonatomic, assign) NSInteger positiveCount;
@property (nonatomic, assign) NSInteger negativeCount;

+ (NSString *) totalScore: (NSInteger) pos count: (NSInteger) neg;

@end

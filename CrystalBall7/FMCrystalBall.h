//
//  FMCrystalBall.h
//  CrystalBall7
//
//  Created by Fredrick Myers on 10/17/13.
//  Copyright (c) 2013 Fredrick Myers. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FMCrystalBall : NSObject

@property (strong, nonatomic) NSArray *predictions;
- (NSString*) randomPrediction;

@end

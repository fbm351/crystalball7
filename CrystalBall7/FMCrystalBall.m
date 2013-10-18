//
//  FMCrystalBall.m
//  CrystalBall7
//
//  Created by Fredrick Myers on 10/17/13.
//  Copyright (c) 2013 Fredrick Myers. All rights reserved.
//

#import "FMCrystalBall.h"

@implementation FMCrystalBall

- (NSArray *) predictions {
    if(_predictions == nil){
       _predictions = [[NSArray alloc] initWithObjects:@"It is Certain", @"It is Decidedly so", @"All signs say YES",
        @"The stars are not aligned",
        @"My reply is NO!",
        @"It is doubtful",
        @"Better not tell you now",
        @"Concentrate and ask again",
        @"Unable to answer now", nil];
    }
    return _predictions;
}

- (NSString*) randomPrediction {
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}

@end

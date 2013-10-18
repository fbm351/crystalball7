//
//  FMViewController.h
//  CrystalBall7
//
//  Created by Fredrick Myers on 10/15/13.
//  Copyright (c) 2013 Fredrick Myers. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FMCrystalBall;

@interface FMViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) FMCrystalBall *crystalBall;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;
// - (IBAction)buttonPressed;

- (void) makePrediction;
- (void) clearPrediction;

@end

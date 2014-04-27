//
//  ViewController.h
//  Crystal Ball
//
//  Created by Michael Stromer on 3/31/14.
//  Copyright (c) 2014 Michael Stromer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class THCrystalBall;

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) THCrystalBall *crystalBall;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

- (void) makePrediction; 
@end

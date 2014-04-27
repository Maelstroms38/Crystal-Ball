//
//  THCrystalBall.h
//  Crystal Ball
//
//  Created by Michael Stromer on 4/10/14.
//  Copyright (c) 2014 Michael Stromer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface THCrystalBall : NSObject {
    NSArray *_predictions;
}

@property(strong, nonatomic, readonly) NSArray *predictions;

- (NSString*) randomPrediction;

@end

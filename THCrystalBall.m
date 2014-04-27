//
//  THCrystalBall.m
//  Crystal Ball
//
//  Created by Michael Stromer on 4/10/14.
//  Copyright (c) 2014 Michael Stromer. All rights reserved.
//

#import "THCrystalBall.h"

@implementation THCrystalBall

- (NSArray*) predictions {
    if (_predictions == nil){
        _predictions = [[NSArray alloc] initWithObjects:@"Yes it is certain",@"My reply is no",@"Now is the time",@"The stars are aligned",@"Time to rock'n'roll!",@"Make the power move", @"Don't count on it", nil];
    }
    return _predictions;
}

- (NSString*) randomPrediction {
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}

@end

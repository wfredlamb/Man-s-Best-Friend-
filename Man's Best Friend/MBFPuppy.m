//
//  MBFPuppy.m
//  Man's Best Friend
//
//  Created by Wilson Lam on 8/19/14.
//  Copyright (c) 2014 Wilson Lam. All rights reserved.
//

#import "MBFPuppy.h"

@implementation MBFPuppy

-(void)givePuppyEyes{
    
    NSLog(@":(");
}

-(void)bark {
    
    [super bark];
    NSLog(@"Whimper whimper");
    [self givePuppyEyes];
}

@end

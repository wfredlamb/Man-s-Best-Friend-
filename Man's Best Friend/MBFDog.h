//
//  MBFDog.h
//  Man's Best Friend
//
//  Created by Wilson Lam on 8/18/14.
//  Copyright (c) 2014 Wilson Lam. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MBFDog : NSObject



@property (nonatomic) int age;
@property(nonatomic, strong) NSString *breed;
@property(strong, nonatomic) UIImage *image;
@property (nonatomic, strong) NSString *name;

-(void)bark;
-(void)barkANumberOfTimes:(int)numberOfTimes;
-(void)changeBreedToWerewolf;
-(void)barkANumberOfTimes:(int)numberOfTimes loudly:(BOOL)isLoud;
-(int)ageInDogYearsFromAge: (int) regularAge;

@end

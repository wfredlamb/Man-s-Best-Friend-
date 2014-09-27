//
//  MBFViewController.h
//  Man's Best Friend
//
//  Created by Wilson Lam on 8/18/14.
//  Copyright (c) 2014 Wilson Lam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MBFViewController : UIViewController

-(void)printHelloWorld;
@property (strong, nonatomic) IBOutlet UIImageView *myImageView;
@property (strong, nonatomic) IBOutlet UILabel *nameLabel;
@property (strong, nonatomic) IBOutlet UILabel *breedLabel;
@property (strong, nonatomic) NSMutableArray *myDogs;
@property (nonatomic) int currentIndex; 

- (IBAction)newDogBarButtonItemPressed:(UIBarButtonItem *)sender;

@end

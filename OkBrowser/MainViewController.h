//
//  MainViewController.h
//  OkBrowser
//
//  Created by Vincent Le Quang on 8/27/13.
//  Copyright (c) 2013 Jack Le Hamster. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

- (IBAction)showInfo:(id)sender;

@end

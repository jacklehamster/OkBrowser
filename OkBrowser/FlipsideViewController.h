//
//  FlipsideViewController.h
//  OkBrowser
//
//  Created by Vincent Le Quang on 8/27/13.
//  Copyright (c) 2013 Jack Le Hamster. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlipsideViewController;

@protocol FlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(FlipsideViewController *)controller;
@end

@interface FlipsideViewController : UIViewController

@property (weak, nonatomic) id <FlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end

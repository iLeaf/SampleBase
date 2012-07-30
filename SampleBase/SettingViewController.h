//
//  SettingViewController.h
//  SampleBase
//
//  Created by 平杉 敦史 on 12/07/30.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SettingViewController;

@protocol SettingViewControllerDelegate
-(void)settingViewControllerDidFinish:(SettingViewController*)controller;
@end

@interface SettingViewController : UITableViewController

@property (weak, nonatomic) id <SettingViewControllerDelegate> delegate;

-(IBAction)done:(id)sender;

@end

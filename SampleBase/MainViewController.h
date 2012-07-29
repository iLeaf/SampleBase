//
//  MainViewController.h
//  SampleBase
//
//  Created by 平杉 敦史 on 12/07/28.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MapManager.h"
#import "SearchManager.h"

@interface MainViewController : UIViewController

@property (nonatomic, assign) IBOutlet MapManager *mapManager;
@property (nonatomic, assign) IBOutlet SearchManager *searchManager;

@end

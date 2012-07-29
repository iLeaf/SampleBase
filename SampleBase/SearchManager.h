//
//  SearchManager.h
//  SampleBase
//
//  Created by 平杉 敦史 on 12/07/28.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//


@class MainViewController;
//#import "MainViewController.h"
#import "MapManager.h"

@interface SearchManager : NSObject

@property (nonatomic, assign) IBOutlet MainViewController *mainViewController;
@property (nonatomic, assign) IBOutlet MapManager *mapManager;

-(void)goSearch;

@end

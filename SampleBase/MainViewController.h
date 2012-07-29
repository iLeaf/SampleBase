//
//  MainViewController.h
//  SampleBase
//
//  Created by 平杉 敦史 on 12/07/28.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "MapManager.h"
#import "SearchManager.h"
#import "SearchViewController.h"

@interface MainViewController : UIViewController
<MapManagerDelegate, SearchViewControllerDelegate>

@property (nonatomic, strong) IBOutlet MapManager *mapManager;
@property (nonatomic, strong) IBOutlet SearchManager *searchManager;

-(IBAction)currentLocation:(id)sender;
-(IBAction)goSearch:(id)sender;


-(IBAction)test:(id)sender;

@end

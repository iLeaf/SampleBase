//
//  MapManager.h
//  SampleBase
//
//  Created by 平杉 敦史 on 12/07/28.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MainViewController;

@interface MapManager : NSObject

@property (nonatomic, assign) IBOutlet MainViewController *mainViewController;

-(void)currentLocation;

@end

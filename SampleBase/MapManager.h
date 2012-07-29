//
//  MapManager.h
//  SampleBase
//
//  Created by 平杉 敦史 on 12/07/28.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

@protocol MapManagerDelegate
-(void)newAddress:(NSString*)address;
@end


@interface MapManager : NSObject

@property (nonatomic, assign) IBOutlet id<MapManagerDelegate> delegate;

-(void)currentLocation;

@end

//
//  MainViewController.m
//  SampleBase
//
//  Created by 平杉 敦史 on 12/07/28.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "MainViewController.h"

@interface MainViewController ()

@end

@implementation MainViewController

@synthesize mapManager = mapManager_;
@synthesize searchManager = searchManager_;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
    
    //[mapManager_ currentLocation:self];
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}


#pragma mark - Interface Button

-(IBAction)currentLocation:(id)sender
{
    NSLog(@"aa");
    [mapManager_ currentLocation];
}

-(IBAction)goSearch:(id)sender
{
    NSLog(@"bb");
    [searchManager_ goSearch];
}


#pragma mark - MapManagerDelegate

-(void)newAddress:(NSString*)address
{
    NSLog(@"%@",address);
}

@end

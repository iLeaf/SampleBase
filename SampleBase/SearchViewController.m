//
//  SearchViewController.m
//  SampleBase
//
//  Created by 平杉 敦史 on 12/07/29.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "SearchViewController.h"

@interface SearchViewController ()

@end

@implementation SearchViewController

@synthesize delegate = delegate_;

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

#pragma mark - Actions

- (IBAction)done:(id)sender
{
    [self.delegate searchViewControllerdidFinish:self];
}


- (void) searchItem:(NSString *) searchText {
    // 検索処理
    NSLog(@"searchItem");
}

- (void) searchBarSearchButtonClicked: (UISearchBar *) searchBar {
	[searchBar resignFirstResponder];
	[self searchItem:searchBar.text];
    NSLog(@"searchBarSearchButtonClicked");
}

- (void) searchBar:(UISearchBar *)searchBar textDidChange:(NSString *) searchText {
	NSLog(@"serch text=%@", searchText);
	if ([searchText length]!=0) {
		// インクリメンタル検索など
	}
}

- (void)searchBarCancelButtonClicked:(UISearchBar *)searchBar
{
    NSLog(@"searchBarCancelButtonClicked");
}


@end

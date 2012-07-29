//
//  SearchViewController.h
//  SampleBase
//
//  Created by 平杉 敦史 on 12/07/29.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

@class SearchViewController;

@protocol SearchViewControllerDelegate
- (void)searchViewControllerdidFinish:(SearchViewController *)controller;
@end

@interface SearchViewController : UIViewController

@property (weak, nonatomic) id <SearchViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end

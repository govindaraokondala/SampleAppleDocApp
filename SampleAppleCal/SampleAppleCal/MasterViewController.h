//
//  MasterViewController.h
//  SampleAppleCal
//
//  Created by hb on 08/11/12.
//  Copyright (c) 2012 hb. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end

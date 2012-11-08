//
//  DetailViewController.h
//  SampleAppleCal
//
//  Created by hb on 08/11/12.
//  Copyright (c) 2012 hb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

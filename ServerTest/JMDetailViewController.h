//
//  JMDetailViewController.h
//  ServerTest
//
//  Created by Justin Mutter on 2013-08-29.
//  Copyright (c) 2013 Justin Mutter. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JMDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

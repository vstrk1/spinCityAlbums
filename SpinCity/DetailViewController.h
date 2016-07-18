//
//  DetailViewController.h
//  SpinCity
//
//  Created by Stuparenko Vladyslav on 7/18/16.
//  Copyright © 2016 Stuparenko Vladyslav. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


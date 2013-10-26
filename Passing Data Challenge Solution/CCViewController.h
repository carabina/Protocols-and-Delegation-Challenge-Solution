//
//  CCViewController.h
//  Passing Data Challenge Solution
//
//  Created by Eliot Arntz on 10/19/13.
//  Copyright (c) 2013 Code Coalition. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCDetailViewController.h"

/* Conform to both the CCDetailViewControllerDelegate and the UITextFieldDelegate */
@interface CCViewController : UIViewController <CCDetailViewControllerDelegate, UITextFieldDelegate>

@property (strong, nonatomic) IBOutlet UITextField *textField;

@end

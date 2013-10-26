//
//  CCDetailViewController.h
//  Passing Data Challenge Solution
//
//  Created by Eliot Arntz on 10/19/13.
//  Copyright (c) 2013 Code Coalition. All rights reserved.
//

#import <UIKit/UIKit.h>

/* Create a protocol that defines a method named didUpdateText and has 1 parameter of type NSString. Notice the name of our delegate is the name of the class with the word Delegate at the end.*/
@protocol CCDetailViewControllerDelegate <NSObject>

-(void)didUpdateText:(NSString *)text;

@end

@interface CCDetailViewController : UIViewController

/* Create a property named delegate. Notice that we use weak instead of strong, type id (a pointer to any type of object) and our variable named delegate conforms to our protocol. */
@property (weak, nonatomic) id <CCDetailViewControllerDelegate> delegate;
@property (strong, nonatomic) IBOutlet UILabel *label;
@property (strong, nonatomic) NSString *informationFromTextField;
@property (strong, nonatomic) IBOutlet UITextField *textField;

- (IBAction)updateButtonPressed:(id)sender;

@end

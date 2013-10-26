//
//  CCDetailViewController.m
//  Passing Data Challenge Solution
//
//  Created by Eliot Arntz on 10/19/13.
//  Copyright (c) 2013 Code Coalition. All rights reserved.
//

#import "CCDetailViewController.h"

@interface CCDetailViewController ()

@end

@implementation CCDetailViewController

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
    
    /* Update the label's text property with the informationFromTextField property. Notice that we update our label in the CCDetailViewController class not in the prepareForSegue method in CCViewController. */
    self.label.text = self.informationFromTextField;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/* When we press the update button update the label's text property with the textField's text property. Call the method defined in the protocol. This method is implemented in the CCViewController file. */ 
- (IBAction)updateButtonPressed:(id)sender
{
    self.label.text = self.textField.text;
    [self.delegate didUpdateText:self.textField.text];
}
@end

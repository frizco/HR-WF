//
//  ViewController.h
//  HR
//
//  Created by Home on 10/30/14.
//  Copyright (c) 2014 Home. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UISwitch *antPlusSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *bluetoothSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *suuntoSwitch;

@property (weak, nonatomic) IBOutlet UISwitch *wildcardSwitch;

@property (weak, nonatomic) IBOutlet UIButton *connectButton;

@property (weak, nonatomic) IBOutlet UILabel *hrLabel;
@property (weak, nonatomic) IBOutlet UILabel *searialLabel;


- (IBAction)connectButtonTouched:(id)sender;


@end


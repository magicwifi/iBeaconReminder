//
//  graAppDelegate.h
//  beaconReminderDemo
//
//  Created by li lin on 3/17/14.
//  Copyright (c) 2014 li lin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "iBeaconUser.h"
@interface graAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, strong) iBeaconUser *user;
@end

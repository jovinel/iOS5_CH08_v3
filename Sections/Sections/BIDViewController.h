//
//  BIDViewController.h
//  Sections
//
//  Created by Maria Alice C. Lim on 12/2/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDViewController : UIViewController
    <UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) NSDictionary *names;
@property (strong, nonatomic) NSArray *keys;

@end

//
//  RandomController.h
//  Random
//
//  Created by baxiang on 14-12-15.
//  Copyright (c) 2014年 xiaoba. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
@interface RandomController : NSObject
@property (weak) IBOutlet NSTextField *currContent;

- (IBAction)send:(id)sender;

- (IBAction)gennerate:(id)sender;
@end

//
//  InfoViewController.h
//  CrossPromotionLib
//
//  Created by Duc Nguyen on 9/6/13.
//  Copyright (c) 2013 DPigpen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InfoViewController : UIViewController<UIWebViewDelegate>

@property (nonatomic, copy) NSString *posid;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil wihPostID:(NSString *) postID;


@end

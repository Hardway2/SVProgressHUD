//
//  SVProgressHUD.h
//
//  Created by Sam Vermette on 27.03.11.
//  Copyright 2011 Sam Vermette. All rights reserved.
//
//  https://github.com/samvermette/SVProgressHUD
//

#import <UIKit/UIKit.h>

@interface SVProgressHUD : UIView

/**
 *  在窗口上显示文字，0.9秒后消失
 *
 *  @param string 要显示的文字
 */
+ (void)progressHUDWithString:(NSString *)string;

@end

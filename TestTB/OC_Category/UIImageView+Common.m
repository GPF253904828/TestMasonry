//
//  UIImageView+Common.m
//  ZhangcaiLicaishi
//
//  Created by Wujg on 15/4/13.
//  Copyright (c) 2015年 hetang. All rights reserved.
//

#import "UIImageView+Common.h"
#import "UIColor+Common.h"

@implementation UIImageView (Common)
- (void)doCircleFrame {
    self.layer.masksToBounds = YES;
    self.layer.cornerRadius = self.frame.size.width/2;
    self.layer.borderWidth = 0.5;
    self.layer.borderColor = [UIColor colorWithHexString:@"0xdddddd"].CGColor;
}

- (void)doNotCircleFrame {
    self.layer.cornerRadius = 0.0;
    self.layer.borderWidth = 0.0;
}

- (void)doBorderWidth:(CGFloat)width color:(UIColor *)color cornerRadius:(CGFloat)cornerRadius {
    self.layer.masksToBounds = YES;
    self.layer.cornerRadius = cornerRadius;
    self.layer.borderWidth = width;
    if (!color) {
        self.layer.borderColor = [UIColor colorWithHexString:@"0xdddddd"].CGColor;
    } else {
        self.layer.borderColor = color.CGColor;
    }
}


@end

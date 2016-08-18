//
//  UIButton+Common.h
//  ZhangcaiLicaishi
//
//  Created by Wujg on 15/4/7.
//  Copyright (c) 2015年 hetang. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^bk_addEventHandlerBlock)(id sender) ;
@interface UIButton (Common)

+ (UIButton *)createButtonWithFrame:(CGRect)frame image:(UIImage *)image hlImage:(UIImage *)hlImage;

+ (UIButton *)createButtonWithFrame:(CGRect)frame image:(UIImage *)image selectImage:(UIImage *)selectImage;

+ (UIButton *)createButtonWithFrame:(CGRect)frame Title:(NSString *)title;

+ (UIButton *)createButtonBorderBlueColor:(CGRect)frame andTitle:(NSString *)titile;

@property (copy,nonatomic)bk_addEventHandlerBlock bk_addEventHandler;

-(void)bk_addEventHandler:(bk_addEventHandlerBlock)block;
@end

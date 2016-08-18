//
//  UIImage+Common.h
//  ZhangcaiLicaishi
//
//  Created by Wujg on 15/4/13.
//  Copyright (c) 2015年 hetang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>


@interface UIImage (Common)

+ (UIImage *)imageWithColor:(UIColor *)aColor;
+ (UIImage *)imageWithColor:(UIColor *)aColor withFrame:(CGRect)aFrame;
+ (UIImage *)fullResolutionImageFromALAsset:(ALAsset *)asset;

//对图片尺寸进行压缩--
- (UIImage *)scaledToSize:(CGSize)targetSize;
- (UIImage *)scaledToSize:(CGSize)targetSize highQuality:(BOOL)highQuality;

//等比例缩放图片
- (UIImage *)scaledToSize:(UIImage *)img size:(CGSize)size;

+ (UIImage *)setImageBySize:(UIImage*)srcimg size:(CGSize)size;

//2G环境下的等比压缩
+ (UIImage*)setImageFor2G:(UIImage*)srcimg;

//从相册里边选择图片的压缩算法
+ (UIImage *)rotateImageForPhoto:(CGImageRef )aImage isWifi:(BOOL)isWifi rotate:(UIImageOrientation)imageOrientation;

//调整图片转向
+ (UIImage *)fixOrientation:(UIImage *)aImage;
// tint只对里面的图案作更改颜色操作
- (UIImage *)imageWithTintColor:(UIColor *)tintColor;
- (UIImage *)imageWithTintColor:(UIColor *)tintColor blendMode:(CGBlendMode)blendMode;
- (UIImage *)imageWithGradientTintColor:(UIColor *)tintColor;

@end

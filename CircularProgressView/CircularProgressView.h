//
//  CircularProgressView.h
//  CircularProgressView
//
//  Created by Zin_戦 on 16/6/26.
//  Copyright © 2016年 Zin戦壕. All rights reserved.

#import <UIKit/UIKit.h>
#define degreesToRadians(x) (M_PI*(x)/180.0) //把角度转换成PI的方式
#define PROGREESS_WIDTH 150 //圆直径
#define PROGRESS_LINE_WIDTH 8 //弧线的宽度

@interface CircularProgressView : UIView


@property(strong,nonatomic) CAShapeLayer *trackLayer;
@property(strong,nonatomic) UIColor *strokeColor;

@property(strong,nonatomic) CAShapeLayer *progressLayer;

@property(strong,nonatomic) CADisplayLink *timer;

@property (nonatomic,strong) UILabel *percentCount;

@end

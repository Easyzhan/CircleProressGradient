//
//  ViewController.m
//  CircularProgressView
//
//
//  Created by Zin_戦 on 16/6/26.
//  Copyright © 2016年 Zin戦壕. All rights reserved.

#import "ViewController.h"
#import "CircularProgressView.h"
@interface ViewController ()


@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    CircularProgressView *circularView = [[CircularProgressView alloc] initWithFrame:CGRectMake(20, 20, PROGREESS_WIDTH, PROGREESS_WIDTH)];
    [self.view addSubview:circularView];
    
}

@end

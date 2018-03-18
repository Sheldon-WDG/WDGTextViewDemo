//
//  ViewController.m
//  WDGTextViewDemo
//
//  Created by Sheldon on 2018/3/17.
//  Copyright © 2018年 Sheldon. All rights reserved.
//

#import "ViewController.h"
#import "WDGTextView.h"

@interface ViewController ()<WDGTextViewDelegate>

@property (nonatomic, strong) WDGTextView *textView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.textView = [[WDGTextView alloc] initWithFrame:CGRectMake(15, 100, self.view.frame.size.width - 30, 200) backgroundColor:[UIColor whiteColor] textColor:[UIColor redColor] fontSize:15 placeHolder:@"请输入文本" placeHolderTextColor:[UIColor lightGrayColor] maxTextLength:300 hiddenMaxText:NO];
    self.textView.textViewDelegate = self;
    self.textView.layer.borderColor = [UIColor blueColor].CGColor;
    self.textView.layer.borderWidth = 1;
    self.textView.layer.masksToBounds = YES;
    self.textView.layer.cornerRadius = 8;
    [self.view addSubview:self.textView];
    
    
}

#pragma mark WDGTextViewDelegate
//当需要显示字数显示的时候，必须实现这个代理方法，虽然在这里可以什么都不用操作
- (void)refreshTextLimit {
    NSLog(@"Sheldon");
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    [self.view endEditing:YES];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end

//
//  WDGTextView.h
//  WDGTextViewDemo
//
//  Created by Sheldon on 2018/3/17.
//  Copyright © 2018年 Sheldon. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WDGTextViewDelegate <NSObject>

@optional
/**
 在显示文字限制的时候，需要实现的代理方法，可以不用操作什么
 */
- (void)refreshTextLimit;

@end

@interface WDGTextView : UITextView


/**
 自定义带提示语和文本字数限制的textView(默认文本左对齐,字体边距（10，8，10，8）)--在显示文本字数限制的时候，需要实现代理方法
 
 @param frame frame大小
 @param backColor 背景颜色（默认白色）
 @param textColor textView文本颜色(默认黑色)
 @param fontSize 字体大小（默认16）
 @param placeHolder 提示文本（默认：请输入文本）
 @param color 提示语颜色（默认lightGrayColor）
 @param maxTextLength 文本字数限制(默认100)
 @param hiddenMaxText 是否隐藏文本字数限制(显示的时候，需要实现代理方法)
 @return WDGTextView
 */
- (instancetype)initWithFrame:(CGRect)frame backgroundColor:(UIColor *)backColor textColor:(UIColor *)textColor fontSize:(CGFloat)fontSize placeHolder:(NSString *)placeHolder placeHolderTextColor:(UIColor *)color maxTextLength:(NSInteger)maxTextLength hiddenMaxText:(BOOL)hiddenMaxText;

@property (nonatomic, weak) id<WDGTextViewDelegate> textViewDelegate;

/**
 提示用户输入的提示语(默认：请输入文本)
 */
@property (nonatomic, copy) NSString *placeHolder;

/**
 提示语文本的颜色（默认lightGrayColor）
 */
@property (nonatomic, strong) UIColor *placeHolderTextColor;

/**
 文本最大输入长度(默认100)
 */
@property (nonatomic, assign) NSInteger maxTextLength;

/**
 是否隐藏文本字数限制
 */
@property (nonatomic, assign) BOOL hiddenMaxText;

@end

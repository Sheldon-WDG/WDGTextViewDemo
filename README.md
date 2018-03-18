# WDGTextViewDemo
带有提示文字和限制字数的textView

带提示文字和字数限制的textView

使用方法：
1、初始化 

self.textView = [[WDGTextView alloc] initWithFrame:CGRectMake(15, 100, self.view.frame.size.width - 30, 200) backgroundColor:[UIColor whiteColor] textColor:[UIColor redColor] fontSize:15 placeHolder:@"请输入文本" placeHolderTextColor:[UIColor lightGrayColor] maxTextLength:300 hiddenMaxText:NO]; 


2、遵循代理 

self.textView.textViewDelegate = self;

3、实现代理方法 

//当需要显示字数显示的时候，必须实现这个代理方法，虽然在这里可以什么都不用操作

    -(void)refreshTextLimit { NSLog(@"Sheldon"); }


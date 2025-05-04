@interface AWESearchAIGCDeepThinkNetModePopover : UIView
@property (nonatomic) DUXPopover popover;
@property (nonatomic) @? cancelCallback;
- (void)setCancelCallback:;
- (id)cancelCallback;
- (id)popover;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)setPopover:;
+ (id)showWithNetModeList:currentType:target:selectCallback:cancelCallback:;
@end

@interface AWESearchAIGCInputCreatePanelRequireOptionView : UIView
@property (nonatomic) DUXPopover popover;
@property (nonatomic) @? cancelCallback;
- (void)setCancelCallback:;
- (id)cancelCallback;
- (void)showWithTargetView:targetRect:maxSize:optList:selectCallback:cancelCallback:;
- (id)popover;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)setPopover:;
+ (id)showWithTargetView:optList:selectCallback:cancelCallback:;
@end

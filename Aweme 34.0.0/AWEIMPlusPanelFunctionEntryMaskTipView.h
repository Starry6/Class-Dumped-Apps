@interface AWEIMPlusPanelFunctionEntryMaskTipView : UIView
@property (nonatomic) NSObject<IESIMBubble> bubble;
- (void)dismiss;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (id)bubble;
- (void)setBubble:;
+ (void)showBubbleForView:content:;
+ (void)showPopoverBubbleForView:content:;
+ (id)showBubbleForView:content:alignLeft:;
@end

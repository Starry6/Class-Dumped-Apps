@interface AWEIMUrgeGenerateContentBubble : UIView
@property (nonatomic) AWEBubble bubble;
- (void)dismiss;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (id)bubble;
- (void)setBubble:;
+ (id)showBubbleForView:content:anchorAdjustment:inDirection:dismissTime:;
+ (id)showBubbleForView:content:anchorAdjustment:inDirection:dismissTime:completion:;
+ (id)showBubbleForView:content:;
+ (id)showBubbleForView:content:anchorAdjustment:inDirection:dismissTime:numberOfLines:fixedSize:;
@end

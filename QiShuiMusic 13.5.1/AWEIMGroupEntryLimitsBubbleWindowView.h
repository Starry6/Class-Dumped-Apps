@interface AWEIMGroupEntryLimitsBubbleWindowView : UIView
@property (nonatomic) AWEBubble bubbleView;
@property (nonatomic) <AWEIMGroupEntryLimitsBubbleWindowViewProtocol> delegate;
@property (nonatomic) BOOL isDismissing;
- (void)setDelegate:;
- (id)hitTest:withEvent:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isDismissing;
- (void)setIsDismissing:;
- (id)bubbleView;
- (void)setBubbleView:;
@end

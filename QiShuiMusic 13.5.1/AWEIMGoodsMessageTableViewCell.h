@interface AWEIMGoodsMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) AWEIMShareGoodsCardView bubbleView;
- (void)configWithMessage:;
- (void)coverTapped:;
- (id)menuTargetView;
- (void)trackGoodsShareEventForName:;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void).cxx_destruct;
- (id)menuItems;
- (id)bubbleView;
- (void)setBubbleView:;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end

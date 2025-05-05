@interface AWEIMCompanyMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) UIView bubbleView;
@property (nonatomic) CAShapeLayer bubbleLayer;
@property (nonatomic) YYLabel contentLabel;
- (void)setBubbleLayer:;
- (void)configWithMessage:;
- (id)menuTargetView;
- (BOOL)menuViewRectContainsPoint:;
- (void)p_updateBubbleLayer;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void).cxx_destruct;
- (id)menuItems;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)bubbleView;
- (void)setBubbleView:;
- (id)bubbleLayer;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end

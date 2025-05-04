@interface AWEIMTextLinkMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) AWEIMShapeView bubbleView;
@property (nonatomic) YYLabel contentLabel;
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) UIView gradientBubbleView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)chatBackgroundDidChangeNty:;
- (void)configWithMessage:;
- (id)gradientBubbleView;
- (id)menuTargetView;
- (void)p_updateBubbleLayer;
- (BOOL)menuViewRectContainsPoint:;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)bubbleView;
- (void)setBubbleView:;
- (id)bubbleLayer;
+ (id)contentSizeWithMesasge:;
+ (id)textLayoutWithMessage:;
+ (id)identifier;
@end

@interface AWEIMGroupNoticeModifyMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) UIView bubbleView;
@property (nonatomic) CAShapeLayer bubbleLayer;
@property (nonatomic) YYLabel titleLabel;
@property (nonatomic) UIView lineView;
@property (nonatomic) YYLabel contentLabel;
- (void)setBubbleLayer:;
- (void)addForwardMsgResource;
- (void)configWithMessage:;
- (void)layoutSubviewsWithMessage:sendFromMe:;
- (void)p_updateBubbleLayer;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void).cxx_destruct;
- (id)menuItems;
- (id)titleLabel;
- (id)lineView;
- (void)setLineView:;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)bubbleView;
- (void)setBubbleView:;
- (id)bubbleLayer;
+ (id)bubbleContentPaddingInsets;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end

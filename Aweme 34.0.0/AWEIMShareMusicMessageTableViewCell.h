@interface AWEIMShareMusicMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) UIView bubbleView;
@property (nonatomic) AWEIMGeneralCardView cardViewView;
- (void)configWithMessage:;
- (void)p_initSubviews;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void)videoCoverTapped:;
- (id)cardViewView;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)bubbleView;
- (void)setBubbleView:;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end

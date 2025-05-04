@interface AWEIMShareGameMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) AWEIMGeneralCardView cardView;
- (void)trackCardClick;
- (void)configWithMessage:;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (id)transitionGameModelFromMessage:;
- (void)didTapGame:;
- (id)chatTypeString;
- (void)gameCoverTapped:;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)setupUI;
- (id)cardView;
- (void)setCardView:;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end

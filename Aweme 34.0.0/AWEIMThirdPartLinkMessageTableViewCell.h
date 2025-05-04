@interface AWEIMThirdPartLinkMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) UIView bubbleView;
@property (nonatomic) AWEIMGeneralCardView cardViewView;
- (void)bubbleViewTapped:;
- (void)configWithMessage:;
- (id)menuTargetView;
- (id)cardViewView;
- (void)trackCellClick;
- (void)trackOpenPlatformEvent:;
- (void)trackWithEventName:;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;
- (void)willDisplayCell;
- (id)bubbleView;
- (void)setBubbleView:;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end

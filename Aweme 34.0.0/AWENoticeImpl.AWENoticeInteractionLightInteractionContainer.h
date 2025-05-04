@interface AWENoticeImpl.AWENoticeInteractionLightInteractionContainer : AWENoticeInteractionBaseContainer
@property (nonatomic) UIButton replyIconButton;
- (void)updateIMReplyIconButton;
- (void)changeReplyIconWithAnimation:;
- (void)handleIMReplyTappedWithSender:;
- (id)replyIconButton;
- (void)setReplyIconButton:;
- (void)triggerCellFirstShow;
- (id)createReplyIconButton;
- (void)configWithCellModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setupUI;
- (void)configLayout;
@end

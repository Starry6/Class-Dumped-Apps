@interface IESLivePKMatchBellBattleInvitePanel : IESLiveRevenueInteractPopupViewController
@property (nonatomic) UILabel matchBellDescrtipionLabel;
@property (nonatomic) UIImageView backGroundImageView;
@property (nonatomic) UIImageView ownerAvatarImageView;
@property (nonatomic) UIView oppositeAvatarContainerView;
@property (nonatomic) UIImageView oppositeAvatarImageView;
@property (nonatomic) UIImageView pkIconView;
@property (nonatomic) UILabel ownerNameLabel;
@property (nonatomic) UILabel oppositeNameLabel;
@property (nonatomic) UILabel ownerDescriptionLabel;
@property (nonatomic) UILabel oppositeDescriptionLabel;
@property (nonatomic) UILabel oppositeAnchorStatusLabel;
@property (nonatomic) UIButton rejectButton;
@property (nonatomic) UIButton acceptButton;
@property (nonatomic) BOOL isClickedButton;
@property (nonatomic) IESLiveCountTimer countDownTimer;
@property (nonatomic) <IESLivePKAnchorBuilderAction> anchorBuilderAction;
- (BOOL)isClickedButton;
- (void)setOppositeAvatarContainerView:;
- (id)anchorBuilderAction;
- (id)backGroundImageView;
- (void)bindAction;
- (id)matchBellDescrtipionLabel;
- (void)onAcceptButtonClicked;
- (void)onDisturbSettingButtonClicked;
- (void)onRejectButtonClicked;
- (void)onSetupNavBar:;
- (id)oppositeAnchorStatusLabel;
- (id)oppositeAvatarContainerView;
- (id)oppositeAvatarImageView;
- (id)oppositeDescriptionLabel;
- (id)oppositeNameLabel;
- (id)ownerAvatarImageView;
- (id)ownerDescriptionLabel;
- (id)ownerNameLabel;
- (id)pkIconView;
- (void)setAnchorBuilderAction:;
- (void)setBackGroundImageView:;
- (void)setIsClickedButton:;
- (void)setMatchBellDescrtipionLabel:;
- (void)setOppositeAnchorStatusLabel:;
- (void)setOppositeAvatarImageView:;
- (void)setOppositeDescriptionLabel:;
- (void)setOppositeNameLabel:;
- (void)setOwnerAvatarImageView:;
- (void)setOwnerDescriptionLabel:;
- (void)setOwnerNameLabel:;
- (void)setPkIconView:;
- (void)startCountDownTimer;
- (void)stopCountDownTimer;
- (void)trackPanelClick:;
- (void)trackPanelShow;
- (void)dismiss;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupViews;
- (id)acceptButton;
- (void)setAcceptButton:;
- (id)rejectButton;
- (void)setRejectButton:;
- (void)setCountDownTimer:;
- (id)countDownTimer;
@end

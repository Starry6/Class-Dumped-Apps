@interface IESLivePKActivePushViewController : IESLiveRevenueInteractPopupViewController
@property (nonatomic) UIView containerView;
@property (nonatomic) UIButton settingButton;
@property (nonatomic) IESLiveAvatarContainerView avatarView;
@property (nonatomic) UILabel privacyHintLabel;
@property (nonatomic) IESLiveCountTimer timer;
@property (nonatomic) UIButton acceptButton;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) IESLivePKConnectingInfoView connectionView;
@property (nonatomic) UILabel disturbLabel;
@property (nonatomic) UIImageView disturbHintImage;
@property (nonatomic) IESLivePKVolumeUpViewController volumeUpVC;
@property (nonatomic) BOOL shouldViewDismiss;
@property (nonatomic) BOOL isTimeUp;
@property (nonatomic) HTSLivePkActivePush activePushData;
- (void)__acceptInteract;
- (void)__cancelInteract;
- (void)__didTapSettingButton;
- (void)__startCountDown;
- (id)activePushData;
- (id)connectionView;
- (id)disturbHintImage;
- (id)disturbLabel;
- (BOOL)isTimeUp;
- (void)onSetupNavBar:;
- (id)privacyHintLabel;
- (void)setActivePushData:;
- (void)setConnectionView:;
- (void)setDisturbHintImage:;
- (void)setDisturbLabel:;
- (void)setIsTimeUp:;
- (void)setPrivacyHintLabel:;
- (void)setSettingButton:;
- (void)setShouldViewDismiss:;
- (void)setVolumeUpVC:;
- (id)settingButton;
- (BOOL)shouldViewDismiss;
- (id)volumeUpVC;
- (id)avatarView;
- (id)containerView;
- (void)setContainerView:;
- (void)setAvatarView:;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (void)setCancelButton:;
- (void)viewWillAppear:;
- (id)cancelButton;
- (void)viewDidLoad;
- (id)acceptButton;
- (void)setAcceptButton:;
- (void)setUpViews;
@end

@interface AWEIMAutoSyncChatBgPopupView : AWEIMBasePopupView
@property (nonatomic) UIImageView logoImgView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIView topLine;
@property (nonatomic) UILabel activeTipsLabel;
@property (nonatomic) @? switchBtnChangedActions;
@property (nonatomic) UIView<IESIMSettingSwitchProtocol> activeTipsSwitch;
- (void)switchControlDidChanged:;
- (id)activeTipsLabel;
- (id)activeTipsSwitch;
- (void)setActiveTipsLabel:;
- (void)setActiveTipsSwitch:;
- (void)setLogoImgView:;
- (id)logoImgView;
- (id)switchBtnChangedActions;
- (void)p_createPopupView;
- (void)showGuideWithDefaultSwitchState:;
- (void)setSwitchBtnChangedActions:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)topLine;
- (void)setTopLine:;
@end

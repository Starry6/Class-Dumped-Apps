@interface IESLiveInteractiveSettingGuidePanel : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView titleSeperatorLineView;
@property (nonatomic) UIImageView previewImageView;
@property (nonatomic) IESLiveInteractiveSettingGuidePanelSceneSwitch floatSceneSwitch;
@property (nonatomic) IESLiveInteractiveSettingGuidePanelSceneSwitch equalSceneSwitch;
@property (nonatomic) UILabel micNumChangeWithOnlineNumLabel;
@property (nonatomic) UISwitch micNumChangeWithOnlineNumSwith;
@property (nonatomic) UIView bottomSeperatorLineView;
@property (nonatomic) UIButton okButton;
@property (nonatomic) IESLiveInteractiveSettingGuidePanelSceneSwitchConfig floatSceneSwitchConfig;
@property (nonatomic) IESLiveInteractiveSettingGuidePanelSceneSwitchConfig equalSceneSwitchConfig;
@property (nonatomic) @? tapBlock;
- (id)p_getPreviewURL;
- (id)bottomSeperatorLineView;
- (id)equalSceneSwitch;
- (id)equalSceneSwitchConfig;
- (id)floatSceneSwitch;
- (id)floatSceneSwitchConfig;
- (id)initWithType:isMicNumChangeWithOnlineNum:;
- (id)micNumChangeWithOnlineNumLabel;
- (id)micNumChangeWithOnlineNumSwith;
- (unsigned long long)p_getCurrentSceneSwitchType;
- (BOOL)p_isDynamic;
- (void)p_micNumChangeWithOnlineNumSwithAction:;
- (void)p_onClickOKButton;
- (void)p_updateSceneSwitchType:isMicNumChangeWithOnlineNum:;
- (void)setBottomSeperatorLineView:;
- (void)setEqualSceneSwitch:;
- (void)setEqualSceneSwitchConfig:;
- (void)setFloatSceneSwitch:;
- (void)setFloatSceneSwitchConfig:;
- (void)setMicNumChangeWithOnlineNumLabel:;
- (void)setMicNumChangeWithOnlineNumSwith:;
- (void)setTapBlock:;
- (void)setTitleSeperatorLineView:;
- (id)tapBlock;
- (id)titleSeperatorLineView;
- (id)init;
- (void)setTitleLabel:;
- (id)intrinsicContentSize;
- (id)okButton;
- (void).cxx_destruct;
- (void)setOkButton:;
- (id)titleLabel;
- (void)setupViews;
- (id)previewImageView;
- (void)setPreviewImageView:;
@end

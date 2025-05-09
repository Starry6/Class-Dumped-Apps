@interface AWEMusicVolumeView : UIView
@property (nonatomic) UIButton backButton;
@property (nonatomic) AWEMusicVolumeSlider voiceSliderView;
@property (nonatomic) UILabel voiceLabelView;
@property (nonatomic) UIImageView voiceIcon;
@property (nonatomic) UILabel voiceMaxLabel;
@property (nonatomic) AWEMusicVolumeSlider bgmSliderView;
@property (nonatomic) UILabel bgmLabelView;
@property (nonatomic) UIImageView bgmIcon;
@property (nonatomic) UILabel bgmMaxLabel;
@property (nonatomic) UILabel voiceErrorLabel;
@property (nonatomic) UIButton voiceErrorButton;
@property (nonatomic) UILabel voiceErrorButtonLabel;
@property (nonatomic) UIImageView voiceErrorButtonIcon;
@property (nonatomic) <ACCMusicVolumeViewModelProtocol> viewModel;
@property (nonatomic) <AWEMusicVolumeViewDelegate> delegate;
@property (nonatomic) float voiceVolume;
@property (nonatomic) float musicVolume;
@property (nonatomic) UISlider bgmSlider;
@property (nonatomic) UISlider voiceSlider;
@property (nonatomic) <HTSVideoSoundEffectPanelViewActionDelegate> actionDelegate;
@property (nonatomic) BOOL userControlVoiceDisable;
@property (nonatomic) BOOL preconditionVoiceDisable;
@property (nonatomic) BOOL preconditionBgmMusicDisable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMusicVolume:;
- (void)setupBinding;
- (id)calculateCustomLabelHeightWithLabel:font:;
- (id)voiceIcon;
- (void)setVoiceIcon:;
- (void)adjustForMusicSelectPanelOptimizationWithDelegate:;
- (id)bgmSlider;
- (id)voiceSlider;
- (BOOL)userControlVoiceDisable;
- (void)setUserControlVoiceDisable:;
- (BOOL)preconditionVoiceDisable;
- (void)setPreconditionVoiceDisable:;
- (BOOL)preconditionBgmMusicDisable;
- (void)setPreconditionBgmMusicDisable:;
- (void)updateBgmMaximumValue:;
- (void)voiceSliderValueChanged:;
- (void)bgmSliderValueChanged:;
- (id)voiceSliderView;
- (id)bgmSliderView;
- (void)setVoiceSliderView:;
- (void)setBgmSliderView:;
- (void)setupVolumeSlider;
- (id)voiceLabelView;
- (id)voiceMaxLabel;
- (id)bgmLabelView;
- (id)bgmIcon;
- (id)bgmMaxLabel;
- (id)voiceErrorLabel;
- (id)voiceErrorButton;
- (id)voiceErrorButtonLabel;
- (id)voiceErrorButtonIcon;
- (void)clickMicPrivacyTrack;
- (void)voiceErrorButtonTapped:;
- (void)setVoiceLabelView:;
- (void)setVoiceMaxLabel:;
- (void)setBgmLabelView:;
- (void)setBgmIcon:;
- (void)setBgmMaxLabel:;
- (void)setVoiceErrorLabel:;
- (void)setVoiceErrorButton:;
- (void)setVoiceErrorButtonLabel:;
- (void)setVoiceErrorButtonIcon:;
- (id)backButton;
- (id)actionDelegate;
- (void)show;
- (void)close;
- (id)initWithViewModel:;
- (id)delegate;
- (id)viewModel;
- (void)setBackButton:;
- (float)musicVolume;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setActionDelegate:;
- (void)setVoiceVolume:;
- (float)voiceVolume;
- (void)setupUI;
- (void)backButtonTapped:;
@end

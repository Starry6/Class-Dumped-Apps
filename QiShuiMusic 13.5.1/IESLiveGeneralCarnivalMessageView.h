@interface IESLiveGeneralCarnivalMessageView : UIView
@property (nonatomic) HTSLiveAmazingBackgroundView bgGradientView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) IESLiveAnimatedImageView effectBgImageView;
@property (nonatomic) CALayer effectBgMaskLayer;
@property (nonatomic) IESLiveAnimatedImageView carnivalLeadingIcon;
@property (nonatomic) UIButton schemaJumpButton;
@property (nonatomic) UILabel countdownLabel;
@property (nonatomic) HTSLiveAmazingBackgroundView borderLayer;
@property (nonatomic) Q state;
@property (nonatomic) HTSLiveGeneralCarnivalMessage message;
@property (nonatomic) @? showCompletion;
@property (nonatomic) double idleTimeInterval;
@property (nonatomic) double warmTimeInterval;
@property (nonatomic) double celebratingTimeInterval;
@property (nonatomic) double exitTimeInterval;
@property (nonatomic) IESLiveGCDTimer warmTimer;
@property (nonatomic) IESLiveGCDTimer exitTimer;
@property (nonatomic) BOOL specialContentShow;
@property (nonatomic) BOOL shouldUseSpecialContent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? allAnimationFinished;
@property (nonatomic) IESLivePSComponentConfigModel configModel;
@property (nonatomic) HTSEventContext trackContext;
- (void)appear:;
- (BOOL)enableShowArrow;
- (void)setConfigModel:;
- (void)actionSchemaJump;
- (id)allAnimationFinished;
- (void)appDidActive;
- (id)bgGradientView;
- (id)carnivalLeadingIcon;
- (double)celebratingTimeInterval;
- (id)configModel;
- (id)countdownLabel;
- (void)didReceivedMattingContourInfo;
- (void)didSetAttachingDIContext;
- (void)disappear:;
- (id)effectBgImageView;
- (id)effectBgMaskLayer;
- (double)exitTimeInterval;
- (double)fetchRealRestTime;
- (void)handleAssembleBusiness:;
- (void)handleAssembleBusinessWithMessage:;
- (void)publicScreenComponentProduced;
- (void)refreshCountDownResetTime:;
- (id)schemaJumpButton;
- (void)setAllAnimationFinished:;
- (void)setBgGradientView:;
- (void)setCarnivalLeadingIcon:;
- (void)setCelebratingTimeInterval:;
- (void)setCountdownLabel:;
- (void)setEffectBgImageView:;
- (void)setEffectBgMaskLayer:;
- (void)setExitTimeInterval:;
- (void)setIdleTimeInterval:;
- (void)setSchemaJumpButton:;
- (void)setShouldUseSpecialContent:;
- (void)setShowCompletion:;
- (void)setSpecialContentShow:;
- (void)setTrackContext:;
- (void)setWarmTimeInterval:;
- (void)setWarmTimer:;
- (BOOL)shouldUseSpecialContent;
- (id)showCompletion;
- (void)showLeadingLoadIcon;
- (void)showSpecialContentOnCelebrating:;
- (BOOL)specialContentShow;
- (id)trackContext;
- (double)warmTimeInterval;
- (id)warmTimer;
- (void)dealloc;
- (void)setMessage:;
- (void)layoutSubviews;
- (void)setState:;
- (void)setExitTimer:;
- (void)setup;
- (unsigned long long)state;
- (id)message;
- (void).cxx_destruct;
- (id)exitTimer;
- (void)willMoveToSuperview:;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)borderLayer;
- (double)idleTimeInterval;
- (void)setBorderLayer:;
@end

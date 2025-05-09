@interface AWENoxusPlayerVolumeView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIImageView animationImageView;
@property (nonatomic) CAGradientLayer progressGradientLayer;
@property (nonatomic) UIView progressBgView;
@property (nonatomic) UIView progressView;
@property (nonatomic) MPVolumeView systemVolumeView;
@property (nonatomic) NSString lastIconName;
@property (nonatomic) double preVolume;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) UIView effectView;
@property (nonatomic) double lastInterval;
@property (nonatomic) BOOL isShowing;
- (void)dismissWithAnimated:;
- (void)setLastInterval:;
- (id)systemVolumeView;
- (double)preVolume;
- (void)setPreVolume:;
- (id)systemVolumeSlider;
- (void)setSystemVolumeView:;
- (id)lastIconName;
- (void)setLastIconName:;
- (id)progressBgView;
- (id)progressGradientLayer;
- (void)setProgressGradientLayer:;
- (void)setProgressBgView:;
- (void)showNewVolume:;
- (void)changeSystemVolume:;
- (void)handleToMuteVolumeChange;
- (void)handleToLessVolumeChange;
- (id)init;
- (double)currentVolume;
- (BOOL)isShowing;
- (id)effectView;
- (id)progressView;
- (id)containerView;
- (void)setEffectView:;
- (void)dismiss;
- (void)setProgressView:;
- (void)setContainerView:;
- (BOOL)isAnimating;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIsAnimating:;
- (void)setIconImageView:;
- (void)setIsShowing:;
- (id)animationImageView;
- (void)setAnimationImageView:;
- (void)initUI;
- (double)lastInterval;
@end

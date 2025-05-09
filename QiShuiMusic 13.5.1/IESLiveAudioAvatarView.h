@interface IESLiveAudioAvatarView : UIView
@property (nonatomic) double avatarWidth;
@property (nonatomic) HTSLiveAudioAnimationView animatedView;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UIView shadowView;
@property (nonatomic) UIImageView silenceImageView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithAvatarSize:;
- (id)pluginLayoutContentSize;
- (void)setAnimationURLs:;
- (void)setAvatarURLs:placeholder:;
- (void)setAvatarURLs:placeholder:complete:;
- (void)setSilenceImageView:;
- (id)silenceImageView;
- (void)startAnimate;
- (void)stopAnimate;
- (void)updateAvatarSize:;
- (void)setupConstraints;
- (id)viewType;
- (id)avatarView;
- (void)setAvatarView:;
- (void)setMute:;
- (void).cxx_destruct;
- (void)setShadowView:;
- (id)shadowView;
- (double)avatarWidth;
- (void)setAvatarWidth:;
- (id)animatedView;
- (void)setAnimatedView:;
@end

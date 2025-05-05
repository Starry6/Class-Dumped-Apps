@interface IESLiveSaaSAudioFeedBackgroundView : UIView
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UIView blackMask;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIView<IESLiveWebPPlayer> webpAnimator;
@property (nonatomic) IESLiveSaaSUserModel userModel;
- (id)blackMask;
- (void)setBlackMask:;
- (void)setWebpAnimator:;
- (id)webpAnimator;
- (id)webpViewWithName:;
- (id)backgroundImageView;
- (void)setUserModel:;
- (id)userModel;
- (id)backgroundImage;
- (id)initWithFrame:;
- (void)setup;
- (void).cxx_destruct;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)setBackgroundImageView:;
@end

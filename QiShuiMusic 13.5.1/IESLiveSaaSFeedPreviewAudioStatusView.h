@interface IESLiveSaaSFeedPreviewAudioStatusView : UIView
@property (nonatomic) IESLiveSaaSFeedOperationModel operationModel;
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UIView blackMask;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) IESLiveSaaSAnimatedImageView webpAnimator;
@property (nonatomic) UIImage webpImage;
- (id)blackMask;
- (id)operationModel;
- (void)setBlackMask:;
- (void)setOperationModel:;
- (void)setWebpAnimator:;
- (void)setWebpImage:;
- (void)updateWithOperationModel:isInLive:;
- (id)webpAnimator;
- (id)webpImage;
- (id)backgroundImageView;
- (id)init;
- (id)backgroundImage;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)setupSubviews;
- (void)setBackgroundImageView:;
@end

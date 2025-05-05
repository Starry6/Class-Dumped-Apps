@interface IESLiveSaaSRankAvatorView : UIView
@property (nonatomic) UIImageView containerView;
@property (nonatomic) UIImageView avatorImageView;
@property (nonatomic) UIView livingAnimationView;
- (id)avatorImageView;
- (id)livingAnimationView;
- (void)setAvatorImageView:;
- (void)setLivingAnimationView:;
- (void)updateImageWithURL:liveState:;
- (id)init;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
@end

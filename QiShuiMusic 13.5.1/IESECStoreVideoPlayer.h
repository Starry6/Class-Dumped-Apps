@interface IESECStoreVideoPlayer : UIView
@property (nonatomic) UIView playerView;
@property (nonatomic) UIView playStatusView;
@property (nonatomic) UIView playIconBackgroundView;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) UIImageView playIconImageView;
@property (nonatomic) UILabel playTimeLabel;
- (id)playIconBackgroundView;
- (id)playIconImageView;
- (id)playStatusView;
- (id)playTimeLabel;
- (void)setPlayIconBackgroundView:;
- (void)setPlayIconImageView:;
- (void)setPlayStatusView:;
- (void)setPlayTimeLabel:;
- (void)setPlayerView:;
- (void)layoutSubviews;
- (id)gradientLayer;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)playerView;
- (void)setGradientLayer:;
- (void)setupViews;
@end

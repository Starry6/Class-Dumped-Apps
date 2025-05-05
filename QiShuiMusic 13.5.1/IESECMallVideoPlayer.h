@interface IESECMallVideoPlayer : UIView
@property (nonatomic) UIView playerView;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UIView playStatusView;
@property (nonatomic) UIView playIconBackgroundView;
@property (nonatomic) UIImageView playIconImageView;
@property (nonatomic) UILabel videoDescLabel;
@property (nonatomic) IESECGradientView gradientView;
- (id)coverImageView;
- (id)playIconBackgroundView;
- (id)playIconImageView;
- (id)playStatusView;
- (void)setCoverImageView:;
- (void)setPlayIconBackgroundView:;
- (void)setPlayIconImageView:;
- (void)setPlayStatusView:;
- (void)setVideoDescLabel:;
- (id)videoDescLabel;
- (void)setPlayerView:;
- (void)layoutSubviews;
- (id)gradientView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)playerView;
- (void)setGradientView:;
- (void)setupViews;
- (void)updateWithModel:;
@end

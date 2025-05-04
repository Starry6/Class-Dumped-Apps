@interface AWEShareAsStoryCoverViewInfoView : UIView
@property (nonatomic) YYLabel titleLab;
@property (nonatomic) UIView playerContainer;
@property (nonatomic) UIImageView playerView;
@property (nonatomic) UIImageView shareIconView;
@property (nonatomic) UIImageView userIconView;
@property (nonatomic) UILabel userNameLab;
@property (nonatomic) AWEGradientView gradientView;
- (id)titleLab;
- (void)setTitleLab:;
- (id)playerContainer;
- (void)setPlayerContainer:;
- (id)shareIconView;
- (void)setShareIconView:;
- (id)userIconView;
- (id)userNameLab;
- (void)setUserIconView:;
- (void)setUserNameLab:;
- (void)updateWithCover:;
- (id)init;
- (id)gradientView;
- (void)setPlayerView:;
- (id)playerView;
- (void).cxx_destruct;
- (void)setGradientView:;
- (void)layoutSubviews;
@end

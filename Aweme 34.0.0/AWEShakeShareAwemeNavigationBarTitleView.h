@interface AWEShakeShareAwemeNavigationBarTitleView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView subtitleContainerView;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) LOTAnimationView searchingLottieView;
@property (nonatomic) NSLayoutConstraint emptySubtitleHeightConstraint;
- (void)initView;
- (void)setEmptySubtitleHeightConstraint:;
- (id)emptySubtitleHeightConstraint;
- (void)setSubtitleContainerView:;
- (id)subtitleContainerView;
- (id)searchingLottieView;
- (void)updateViewWithSubtitle:;
- (void)setSearchingLottieView:;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)setupLayout;
@end

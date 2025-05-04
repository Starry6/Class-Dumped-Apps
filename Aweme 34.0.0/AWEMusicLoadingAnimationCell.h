@interface AWEMusicLoadingAnimationCell : UICollectionViewCell
@property (nonatomic) UIView<_TtP9AWELottie13AWELottieView_> loadingAnimation;
@property (nonatomic) UILabel loadingTipLbl;
@property (nonatomic) BOOL animationFillToContent;
- (id)loadingAnimation;
- (BOOL)animationFillToContent;
- (id)loadingAnimationName;
- (void)setAnimationFillToContent:;
- (void)setLoadingAnimation:;
- (id)loadingTipLbl;
- (void)setLoadingTipLbl:;
- (void)stopAnimating;
- (id)initWithFrame:;
- (void)setFrame:;
- (void).cxx_destruct;
- (void)startAnimating;
@end

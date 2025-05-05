@interface BDASplashSlideUpContainer : BDASplashComplianceBaseSlideView
@property (nonatomic) BDASplashBannerView bannerView;
@property (nonatomic) BDASplashSlideUpView slideView;
@property (nonatomic) double bottomHeight;
@property (nonatomic) double bottomMargin;
- (id)getSpecificControlsForAnimation;
- (id)initWithFrame:viewHolder:viewModel:;
- (void)loadAnimation;
- (void)setSlideView:;
- (id)slideView;
- (void)updateSubviewLayout;
- (double)bottomMargin;
- (void).cxx_destruct;
- (void)setupView;
- (void)setBottomMargin:;
- (id)bannerView;
- (void)setBannerView:;
- (double)bottomHeight;
- (void)setBottomHeight:;
@end

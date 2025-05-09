@interface AWEBannerPageControl : UIControl
@property (nonatomic) NSArray indicators;
@property (nonatomic) q numberOfPages;
@property (nonatomic) q currentPage;
@property (nonatomic) BOOL hidesForSinglePage;
@property (nonatomic) double pageIndicatorSpaing;
@property (nonatomic) {UIEdgeInsets=dddd} contentInset;
@property (nonatomic) UIColor pageIndicatorTintColor;
@property (nonatomic) UIColor currentPageIndicatorTintColor;
@property (nonatomic) {CGSize=dd} pageIndicatorSize;
@property (nonatomic) {CGSize=dd} currentPageIndicatorSize;
- (void)setIndicators:;
- (void)layoutIndicators;
- (void)resetIndicators;
- (void)updateIndicators;
- (id)pageIndicatorSize;
- (double)pageIndicatorSpaing;
- (id)currentPageIndicatorSize;
- (void)setPageIndicatorSize:;
- (void)setPageIndicatorSpaing:;
- (void)setCurrentPageIndicatorSize:;
- (void)setContentInset:;
- (id)initWithFrame:;
- (id)indicators;
- (long long)currentPage;
- (id)sizeThatFits:;
- (void)setCurrentPage:;
- (id)contentInset;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (long long)numberOfPages;
- (id)currentPageIndicatorTintColor;
- (BOOL)hidesForSinglePage;
- (id)pageIndicatorTintColor;
- (void)setCurrentPageIndicatorTintColor:;
- (void)setHidesForSinglePage:;
- (void)setNumberOfPages:;
- (void)setPageIndicatorTintColor:;
- (void)setupView;
- (void)initProperties;
@end

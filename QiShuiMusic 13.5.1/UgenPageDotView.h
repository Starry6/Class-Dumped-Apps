@interface UgenPageDotView : UIView
@property (nonatomic) q numberOfPages;
@property (nonatomic) q currentPage;
@property (nonatomic) UIColor pageIndicatorColor;
@property (nonatomic) UIColor currentPageIndicatorColor;
@property (nonatomic) double dotWidth;
@property (nonatomic) double dotHeight;
@property (nonatomic) double dotMargin;
- (id)currentPageIndicatorColor;
- (double)dotHeight;
- (double)dotMargin;
- (double)dotWidth;
- (id)pageIndicatorColor;
- (void)setCurrentPageIndicatorColor:;
- (void)setDotHeight:;
- (void)setDotMargin:;
- (void)setDotWidth:;
- (void)setPageIndicatorColor:;
- (void)layoutSubviews;
- (long long)currentPage;
- (long long)numberOfPages;
- (void).cxx_destruct;
- (void)setCurrentPage:;
- (void)setNumberOfPages:;
@end

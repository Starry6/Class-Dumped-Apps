@interface UgenPageControl : UIPageControl
@property (nonatomic) UgenPageDotView pageDotView;
@property (nonatomic) q style;
@property (nonatomic) double dotWidth;
@property (nonatomic) double dotHeight;
@property (nonatomic) double dotMargin;
- (void)setPageDotView:;
- (double)dotHeight;
- (double)dotMargin;
- (double)dotWidth;
- (id)pageDotView;
- (void)setDotHeight:;
- (void)setDotMargin:;
- (void)setDotWidth:;
- (void)updataFrame:;
- (void)layoutSubviews;
- (void)setStyle:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (long long)style;
- (void)setCurrentPage:;
- (void)setNumberOfPages:;
- (void)setPageIndicatorTintColor:;
- (void)setCurrentPageIndicatorTintColor:;
@end

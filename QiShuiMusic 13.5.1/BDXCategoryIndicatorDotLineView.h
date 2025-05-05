@interface BDXCategoryIndicatorDotLineView : BDXCategoryIndicatorComponentView
@property (nonatomic) BDXCategoryViewAnimator animator;
@property (nonatomic) double lineWidth;
- (void)configureDefaulteValue;
- (void)jx_contentScrollViewDidScroll:;
- (void)jx_refreshState:;
- (void)jx_selectedCell:;
- (id)animator;
- (void)setLineWidth:;
- (double)lineWidth;
- (void)setAnimator:;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end

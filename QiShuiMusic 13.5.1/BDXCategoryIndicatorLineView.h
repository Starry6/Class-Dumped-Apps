@interface BDXCategoryIndicatorLineView : BDXCategoryIndicatorComponentView
@property (nonatomic) BDXCategoryViewAnimator animator;
@property (nonatomic) Q lineStyle;
@property (nonatomic) double lineScrollOffsetX;
- (void)configureDefaulteValue;
- (void)jx_contentScrollViewDidScroll:;
- (void)jx_refreshState:;
- (void)jx_selectedCell:;
- (double)lineScrollOffsetX;
- (void)setLineScrollOffsetX:;
- (void)setLineStyle:;
- (id)animator;
- (void)setAnimator:;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (unsigned long long)lineStyle;
@end

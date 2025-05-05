@interface BDXCategoryIndicatorRainbowLineView : BDXCategoryIndicatorLineView
@property (nonatomic) NSArray indicatorColors;
- (id)indicatorColors;
- (void)jx_contentScrollViewDidScroll:;
- (void)jx_refreshState:;
- (void)jx_selectedCell:;
- (void)setIndicatorColors:;
- (void).cxx_destruct;
@end

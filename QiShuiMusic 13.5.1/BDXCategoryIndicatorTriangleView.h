@interface BDXCategoryIndicatorTriangleView : BDXCategoryIndicatorComponentView
@property (nonatomic) CAShapeLayer triangleLayer;
- (void)configureDefaulteValue;
- (void)jx_contentScrollViewDidScroll:;
- (void)jx_refreshState:;
- (void)jx_selectedCell:;
- (void)setTriangleLayer:;
- (id)triangleLayer;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end

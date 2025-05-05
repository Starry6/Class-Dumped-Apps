@interface IESECSliceAutoLayoutCouponView : IESECSliceXViewElementView
@property (nonatomic) double previousWidth;
@property (nonatomic) NSArray itemViews;
@property (nonatomic) BOOL needToCheckSubElements;
- (BOOL)needToCheckSubElements;
- (BOOL)needToReLayout;
- (void)setNeedToCheckSubElements:;
- (void)setupElementView;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)previousWidth;
- (void)setPreviousWidth:;
- (id)itemViews;
- (void)setItemViews:;
@end

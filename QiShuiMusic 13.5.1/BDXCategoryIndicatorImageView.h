@interface BDXCategoryIndicatorImageView : BDXCategoryIndicatorComponentView
@property (nonatomic) UIImageView indicatorImageView;
@property (nonatomic) BOOL indicatorImageViewRollEnabled;
@property (nonatomic) {CGSize=dd} indicatorImageViewSize;
- (id)indicatorImageView;
- (BOOL)indicatorImageViewRollEnabled;
- (id)indicatorImageViewSize;
- (void)jx_contentScrollViewDidScroll:;
- (void)jx_refreshState:;
- (void)jx_selectedCell:;
- (void)setIndicatorImageViewRollEnabled:;
- (void)setIndicatorImageViewSize:;
- (void)setupIndicatorImageView;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end

@interface AWEVideoRelatedStablePageLoadingCell : UICollectionViewCell
@property (nonatomic) UIView shimmerView;
@property (nonatomic) UIView loadingMaskView;
@property (nonatomic) AWEVideoRelatedStablePageLoadingCellItemView cardCellView;
@property (nonatomic) <AWEVideoRelatedStablePageLoadingCellDelegate> delegate;
- (void)awe_themeWillChange:;
- (id)loadingMaskView;
- (void)setLoadingMaskView:;
- (id)shimmerView;
- (void)setShimmerView:;
- (id)cardCellView;
- (void)setupLoadingMaskView;
- (void)updateShimmerViewWithLoadingMaskView:;
- (id)getShimmerView:;
- (void)showAnimation:;
- (void)setCardCellView:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
+ (double)getCellHeight;
@end

@interface AWETheaterHeaderView : UICollectionReusableView
@property (nonatomic) UIView imageViewContainer;
@property (nonatomic) @? didClickAction;
@property (nonatomic) UIImageView rightImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL enableAdapterPad;
- (void)duxGrid_viewDidChangeBreakPointFrom:toBreakPoint:;
- (void)duxGrid_updateHorizontalBreakPointWithConfig:;
- (id)didClickAction;
- (id)imageViewContainer;
- (void)setImageViewContainer:;
- (BOOL)enableAdapterPad;
- (void)setDidClickAction:;
- (void)refreshMarginIfNeeded;
- (void)didClickRightImageViewAction;
- (void)setRightImageViewClickAction:;
- (void)setEnableAdapterPad:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)configureSubviews;
- (void)configureConstraints;
- (id)rightImageView;
- (void)setRightImageView:;
@end

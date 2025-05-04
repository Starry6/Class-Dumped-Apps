@interface AWEVideoDescriptionMaskLoadingCell : UICollectionViewCell
@property (nonatomic) UIView leftCellView;
@property (nonatomic) UIView rightCellView;
@property (nonatomic) UIButton closeButton;
- (void)showCloseButton:;
- (id)leftCellView;
- (id)rightCellView;
- (double)bottomSafeAreaOffset;
- (void)showSkeletonView:;
- (void)setLeftCellView:;
- (void)setRightCellView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (double)cellWidth;
- (void)setupUI;
- (void)setCloseButton:;
- (double)cellHeight;
- (id)closeButton;
@end

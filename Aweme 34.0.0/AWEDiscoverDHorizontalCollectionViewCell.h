@interface AWEDiscoverDHorizontalCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIViewController<AWEDiscoverDHorizontalCellController> cellController;
@property (nonatomic) @? didSelectWithCellBlock;
- (id)cellController;
- (void)setCellController:;
- (void)setDidSelectWithCellBlock:;
- (id)didSelectWithCellBlock;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)singleTap;
@end

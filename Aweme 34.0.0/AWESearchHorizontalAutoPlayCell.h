@interface AWESearchHorizontalAutoPlayCell : UICollectionViewCell
@property (nonatomic) UIViewController<AWESearchHorizontalAutoPlayCellProtocol> cellController;
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

@interface IESECWinHybridSortCell : UICollectionViewCell
@property (nonatomic) IESECWinSortCell sortCell;
@property (nonatomic) IESECWinCategoryContainerCell categoryContainerCell;
- (id)categoryContainerCell;
- (void)setCategoryContainerCell:;
- (void)setSortCell:;
- (id)sortCell;
- (void)updateWithSortSize:categorySize:showSort:showSubCategory:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setUpConstraints;
@end

@interface IESECSKUInstallmentCell : UICollectionViewCell
@property (nonatomic) Q lastSelectedIndex;
@property (nonatomic) NSArray installmentItemArray;
@property (nonatomic) BOOL canSelectInstallment;
@property (nonatomic) UICollectionView collectionView;
- (BOOL)canSelectInstallment;
- (void)configureUIWithInstallment:canSelect:;
- (id)installmentItemArray;
- (unsigned long long)lastSelectedIndex;
- (void)setCanSelectInstallment:;
- (void)setInstallmentItemArray:;
- (void)setLastSelectedIndex:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (id)collectionView;
@end

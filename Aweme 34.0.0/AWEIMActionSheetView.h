@interface AWEIMActionSheetView : UIView
@property (nonatomic) NSArray itemModels;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UIView seperateline;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setItemModels:;
- (id)itemModels;
- (void)p_setupView;
- (void)setSeperateline:;
- (id)seperateline;
- (id)initWithItemModels:;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)layoutSubviews;
@end

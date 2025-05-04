@interface AWETemplateMaterialSlotsView : UIView
@property (nonatomic) NSMutableArray allModels;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) @? didTouchAssetBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDidTouchAssetBlock:;
- (id)allModels;
- (id)didTouchAssetBlock;
- (void)setAllModels:;
- (void)reloadSlotsViewWithCellModels:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setupUI;
@end

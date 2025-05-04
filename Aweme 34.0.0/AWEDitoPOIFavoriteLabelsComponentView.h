@interface AWEDitoPOIFavoriteLabelsComponentView : DitoComponentView
@property (nonatomic) AWEDitoPOIFavoriteLabelsComponentViewModel viewModel;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSMutableDictionary selectedMap;
@property (nonatomic) AWEDitoPOIFavoritePageContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateViewModel:;
- (id)getLabelItemWithSection:index:;
- (void)trackWithItem:extraParams:;
- (id)selectedMap;
- (void)setSelectedMap:;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)viewModel;
- (id)initWithFrame:;
- (void)reload;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
@end

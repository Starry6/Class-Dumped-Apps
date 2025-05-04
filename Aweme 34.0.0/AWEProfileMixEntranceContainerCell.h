@interface AWEProfileMixEntranceContainerCell : UICollectionViewCell
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray models;
@property (nonatomic) @? didSelectItemBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)didSelectItemBlock;
- (void)p_trackTagTitleShown:;
- (void)setDidSelectItemBlock:;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)initWithFrame:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setModels:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)models;
@end

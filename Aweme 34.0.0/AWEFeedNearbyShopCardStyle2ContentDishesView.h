@interface AWEFeedNearbyShopCardStyle2ContentDishesView : UIView
@property (nonatomic) UICollectionView dishesCollectionView;
@property (nonatomic) AWEFeedNearbyPOIShopCardModel model;
@property (nonatomic) UIView imageBackupView;
@property (nonatomic) BOOL isStructModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dishesCollectionView;
- (void)setIsStructModel:;
- (BOOL)isStructModel;
- (void)updateWithPOIShopCardModel:;
- (id)imageBackupView;
- (void)setDishesCollectionView:;
- (void)setImageBackupView:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (void)setModel:;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (id)model;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)layoutUI;
@end

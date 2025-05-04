@interface AWETeenDiscoverLoadingView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray coverCellRatioArray;
@property (nonatomic) q channelIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)collectionView:layout:columnCountForSection:;
- (double)collectionView:layout:minimumColumnSpacingForSectionAtIndex:;
- (id)initWithChannelIndex:;
- (id)coverCellRatioArray;
- (void)setCoverCellRatioArray:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)collectionView;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (long long)channelIndex;
- (void)setChannelIndex:;
@end

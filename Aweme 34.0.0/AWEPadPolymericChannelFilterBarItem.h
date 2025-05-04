@interface AWEPadPolymericChannelFilterBarItem : NSObject
@property (nonatomic) NSString filterKey;
@property (nonatomic) @? selectBlock;
@property (nonatomic) NSArray filterValues;
@property (nonatomic) UICollectionView filterView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSelectBlock:;
- (id)filterValues;
- (id)filterKey;
- (id)initWithFilterKey:filterValues:;
- (void)setFilterKey:;
- (void)setFilterValues:;
- (id)filterView;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setFilterView:;
- (long long)numberOfSectionsInCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)selectBlock;
@end

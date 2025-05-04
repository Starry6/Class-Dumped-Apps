@interface AWENearbyC2ContainerCollectionViewDataSource : NSObject
@property (nonatomic) NSArray delegates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDataSourceDelegateArray:;
- (id)delegates;
- (void)setDelegates:;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
@end

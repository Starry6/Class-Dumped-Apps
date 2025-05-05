@interface AWEIMCollectionViewDiffableDataSource : NSObject
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWEIMDiffableDataSourceSnapshot snapshot;
@property (nonatomic) @? cellProvider;
@property (nonatomic) @? supplementaryViewProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCollectionView:cellProvider:;
- (id)supplementaryViewProvider;
- (void)setSnapshot:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)applySnapshot:animatingDifferences:completion:;
- (void)setSupplementaryViewProvider:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (id)snapshot;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)collectionView;
- (id)cellProvider;
- (void)setCellProvider:;
@end

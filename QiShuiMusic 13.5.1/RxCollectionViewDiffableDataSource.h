@interface RxCollectionViewDiffableDataSource : NSObject
@property (nonatomic) @? supplementaryViewProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_isDiffableDataSource;
- (id)initWithCollectionView:cellProvider:;
- (id)supplementaryViewProvider;
- (id)sectionIdentifierForIndex:;
- (id)itemIdentifierForIndexPath:;
- (id)indexPathForItemIdentifier:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)applySnapshot:animatingDifferences:completion:;
- (void)setSupplementaryViewProvider:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void).cxx_destruct;
- (id)snapshot;
- (id)impl;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)description;
- (long long)numberOfSectionsInCollectionView:;
- (long long)indexForSectionIdentifier:;
- (void)applySnapshot:animatingDifferences:;
@end

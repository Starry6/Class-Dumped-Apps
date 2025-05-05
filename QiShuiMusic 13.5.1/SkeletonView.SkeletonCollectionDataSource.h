@interface SkeletonView.SkeletonCollectionDataSource : NSObject
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (id)init;
- (void).cxx_destruct;
@end

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification
- (id)insertedObjects;
- (void)dealloc;
- (id)deletedObjects;
- (void)enumerateMovesWithBlock:;
- (BOOL)shouldReload;
- (id)changedIndexes;
- (id)insertedIndexes;
- (void).cxx_destruct;
- (id)object;
- (unsigned long long)snapshotIndexForContainedObject:;
- (id)changedObjects;
- (id)deletedIndexes;
- (BOOL)_getOldSet:newSet:;
- (id)changedIndexesRelativeToSnapshot;
- (id)albumList;
- (id)initWithAggregateAlbumList:fromAlbumListChangeNotification:indexOffset:;
+ (id)notificationForAggregateAlbumList:fromAlbumListChangeNotification:indexOffset:;
@end

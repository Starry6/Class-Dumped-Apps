@interface PLSortedAlbumListChangeNotification : PLAssetContainerListChangeNotification
- (id)init;
- (BOOL)shouldReload;
- (void).cxx_destruct;
- (id)object;
- (id)description;
- (id)_changedObjects;
- (BOOL)_getOldSet:newSet:;
- (BOOL)countDidChange;
- (id)albumList;
- (id)initWithSortedAlbumList:albumListChangeNotification:;
+ (id)notificationForDerivedObject:priorChangeState:forBackingObjectNotification:;
@end

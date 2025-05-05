@interface PLFilteredAlbumListChangeNotification : PLAssetContainerListChangeNotification
@property (nonatomic) NSIndexSet updatedFilteredIndexes;
@property (nonatomic) NSIndexSet filteredIndexes;
@property (nonatomic) PLIndexMapper indexMapper;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)filteredIndexes;
- (BOOL)shouldIncludeObjectAtIndex:;
- (BOOL)shouldReload;
- (id)indexMapper;
- (void).cxx_destruct;
- (id)object;
- (id)description;
- (id)_changedObjects;
- (BOOL)_getOldSet:newSet:;
- (BOOL)countDidChange;
- (id)_diffDescription;
- (id)updatedFilteredIndexes;
- (void)setFilteredIndexes:;
- (id)albumList;
- (id)initWithFilteredAlbumList:albumListChangeNotification:;
+ (id)notificationForDerivedObject:priorChangeState:forBackingObjectNotification:;
@end

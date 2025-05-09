@interface PLFilteredAlbumList : NSObject
@property (nonatomic) PLManagedAlbumList backingAlbumList;
@property (nonatomic) NSInteger filter;
@property (nonatomic) NSPredicate predicate;
@property (nonatomic) NSMutableOrderedSet _albums;
@property (nonatomic) s albumListType;
@property (nonatomic) NSMutableOrderedSet albums;
@property (nonatomic) Q unreadAlbumsCount;
@property (nonatomic) BOOL canEditAlbums;
@property (nonatomic) PLPhotoLibrary photoLibrary;
@property (nonatomic) PLIndexMapper indexMapper;
@property (nonatomic) Q albumsCount;
@property (nonatomic) BOOL isFolder;
@property (nonatomic) @? albumsSortingComparator;
@property (nonatomic) NSString _prettyDescription;
@property (nonatomic) NSString _typeDescription;
@property (nonatomic) Q containersCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSIndexSet filteredIndexes;
@property (nonatomic) <NSObject><NSCopying> cachedIndexMapState;
- (id)albums;
- (id)photoLibrary;
- (id)containers;
- (id)managedObjectContext;
- (int)filter;
- (void)setFilter:;
- (BOOL)isEmpty;
- (id)cachedIndexMapState;
- (void)dealloc;
- (void)set_albums:;
- (void)preheatAlbumsAtIndexes:forProperties:relationships:;
- (unsigned long long)indexInFilteredAlbumsOfObject:;
- (void)_backingContextDidChange:;
- (void)setNeedsReordering;
- (id)filteredIndexes;
- (id)initWithBackingAlbumList:filter:;
- (id)identifier;
- (void)updateAlbumsOrderIfNeeded;
- (void)registerDerivedAlbumList:;
- (BOOL)shouldIncludeObjectAtIndex:;
- (BOOL)isFolder;
- (void)replaceFilteredAlbumsAtIndexes:withFilteredValues:;
- (unsigned long long)countOfFilteredAlbums;
- (unsigned long long)unreadAlbumsCount;
- (id)predicate;
- (id)_typeDescription;
- (void)insertFilteredAlbums:atIndexes:;
- (void)_invalidateFilteredIndexes;
- (id)indexMapper;
- (short)albumListType;
- (unsigned long long)albumsCount;
- (void)setBackingAlbumList:;
- (id)_albums;
- (void)unregisterAllDerivedAlbums;
- (id)containersRelationshipName;
- (void)preheatAlbumsForProperties:relationships:;
- (void)setPredicate:;
- (void)insertObject:inFilteredAlbumsAtIndex:;
- (BOOL)canEditAlbums;
- (BOOL)hasAtLeastOneAlbum;
- (void).cxx_destruct;
- (unsigned long long)containersCount;
- (Class)derivedChangeNotificationClass;
- (id)albumsSortingComparator;
- (id)backingAlbumList;
- (id)filteredAlbumsAtIndexes:;
- (id)objectInFilteredAlbumsAtIndex:;
- (id)description;
- (BOOL)needsReordering;
- (id)_prettyDescription;
- (void)replaceObjectInFilteredAlbumsAtIndex:withObject:;
- (BOOL)canEditContainers;
- (void)removeObjectFromFilteredAlbumsAtIndex:;
- (BOOL)mappedDataSourceChanged:remoteNotificationData:;
- (void)enumerateDerivedAlbumLists:;
- (BOOL)albumHasFixedOrder:;
- (void)removeFilteredAlbumsAtIndexes:;
+ (id)filteredAlbumList:filter:;
@end

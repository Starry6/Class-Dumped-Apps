@interface ML3UpdateSpotlightIndexOperation : ML3DatabaseOperation
@property (nonatomic) CSSearchableIndex index;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) Q bundle;
@property (nonatomic) Q batchCount;
- (id)bundleIdentifier;
- (id)index;
- (void)setBundleIdentifier:;
- (unsigned long long)bundle;
- (unsigned long long)type;
- (void)setIndex:;
- (void).cxx_destruct;
- (void)setBundle:;
- (unsigned long long)batchCount;
- (void)setBatchCount:;
- (BOOL)_execute:;
- (BOOL)_verifyLibraryConnectionAndAttributesProperties:;
- (BOOL)_updateIndexedItemsWithIdentifiers:error:;
- (BOOL)_indexItemsFromLibrarySinceRevision:targetRevision:error:;
- (BOOL)_deleteAllIndexedItemsWithError:;
- (BOOL)_deleteIndexedItemsWithEntityStringIDs:error:;
- (BOOL)_indexTracksWithPersistentIDs:playlistsWithPersistentIDs:error:;
- (BOOL)_batchIndexWithTrackPersistentIDsToUpdate:playlistsPersistentIDsToUpdateSet:entityStringsToDelete:currentRevision:targetRevision:error:;
- (BOOL)_enumerateSearchableItemsWithPersistentIDs:entityType:error:usingBlock:;
- (id)_createSearchableItemsWithPersistentIDs:entityType:error:;
- (id)_createSearchableItemsForTracksWithQuery:error:;
- (id)_createSearchableItemsForPlaylistsWithQuery:error:;
- (id)_queryForPlaylistsContainingMusicShowsMissedByQuery:inContainerPIDs:;
@end

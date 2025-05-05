@interface PLSearchIndexStatusManager : NSObject
+ (unsigned long long)currentSearchIndexVersion;
+ (id)lastSearchIndexingSyncTokenForLibrary:;
+ (BOOL)saveSearchIndexingSyncToken:library:;
+ (id)currentSearchIndexingSyncTokenForLibrary:;
+ (BOOL)searchIndexIsRebuildingForLibrary:;
+ (BOOL)saveSearchIndexIsRebuilding:library:;
+ (id)searchIndexingRebuildInfoForLibrary:;
+ (BOOL)saveCurrentSearchIndexInfoForPhotoLibrary:sceneTaxonomyDigests:;
+ (BOOL)isSearchIndexingStateInSyncWithSpotlightClientState:;
+ (BOOL)saveSpotlightRequestedRebuildForPhotoLibrary:;
+ (BOOL)_saveSearchIndexingRebuildInfo:library:;
+ (id)_searchIndexingStatusPlistPathForLibrary:;
+ (id)_searchIndexingStatusPlistForLibrary:;
+ (BOOL)_writeSearchIndexingStatusPlistToDisk:library:;
@end

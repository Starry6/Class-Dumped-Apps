@interface PLSearchIndexRebuildUtilities : NSObject
+ (BOOL)setSearchIndexNeedsRebuildForPhotoLibrary:;
+ (void)setSearchIndexRebuildCompleteForManagedObjects:entityName:;
+ (unsigned long long)searchIndexRebuildReasonsForPhotoLibrary:sceneTaxonomyDigests:;
+ (unsigned long long)searchIndexRebuildTypeFromRebuildReasons:;
+ (BOOL)_resetSearchIndexRebuildStateForEntityName:photoLibrary:;
+ (BOOL)_searchIndexVersionDidChange:;
+ (BOOL)_deviceLocaleDidChange:;
+ (BOOL)_sceneTaxonomySHAsDidChange:searchIndexInfo:;
+ (BOOL)_spotlightDidRequestRebuild:;
+ (BOOL)_featureFlagsDidChange:;
+ (id)_searchIndexRebuildStateKeyPathForEntityName:;
@end

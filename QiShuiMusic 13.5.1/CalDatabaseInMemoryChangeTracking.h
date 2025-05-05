@interface CalDatabaseInMemoryChangeTracking : NSObject
- (id)init;
- (id)changedEntityIDsBetweenTimestamp:andTimestamp:latestTimestamp:client:changesAreSyncStatusOnly:;
- (id)changedEntityIDsForDatabase:sinceTimestamp:latestTimestamp:changesAreSyncStatusOnly:;
- (void)clearAllChangesets;
- (id)changedEntityIDsBetweenMinExternalTimestamp:minSelfTimestamp:maxExternalTimestamp:latestSelfTimestamp:client:changesAreSyncStatusOnly:;
- (void)addChangeset:clientID:onlySyncStatusChanged:;
+ (id)changeTrackingForDatabaseWithPath:;
+ (void)setInterestedDatabasePaths:forContext:;
+ (void)setInterestedDatabases:forContext:;
+ (void)_setInterestedDatabasePaths:forContext:;
+ (id)changeTrackingForDatabase:;
+ (id)canonicalizePath:;
+ (id)pathForDatabase:;
@end

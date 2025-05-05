@interface PFCloudKitStoreComparer : NSObject
@property (nonatomic) PFCloudKitStoreComparisonCache cache;
@property (nonatomic) PFCloudKitArchivingUtilities archivingUtilities;
@property (nonatomic) BOOL onlyCompareSharedZones;
- (void)dealloc;
- (id)cache;
- (id)initWithStore:otherStore:;
- (BOOL)ensureContentsMatch:;
- (BOOL)ensureContentsOfStore:matchContentsOfStore:error:;
- (id)getObjectMatchingRecordID:fromStore:withManagedObjectContext:;
- (BOOL)compareContentOfStore:toStore:error:;
- (BOOL)compareDatabaseScopeAndIdentityInStore:toStore:error:;
- (BOOL)compareObjectsInStore:toStore:error:;
- (BOOL)compareAttributesOnObject:toObject:error:;
- (BOOL)isValue:equalToValue:forAttribute:;
- (BOOL)validateValue:againstOtherValue:forIgnoredAttribute:;
- (BOOL)compareRelationshipsOfRecordID:withStoreObject:andOtherObject:error:;
- (id)getRecordIDsForRelationship:onObject:;
- (BOOL)ensureStoresAgreeOnCloudKitTables:error:;
- (BOOL)compareCloudKitMetadataOfStore:toStore:error:;
- (BOOL)ensureMoveReceiptsMatchForStore:otherStore:error:;
- (BOOL)ensureMirroredRelationshipsMatchForStore:otherStore:error:;
- (id)archivingUtilities;
- (BOOL)onlyCompareSharedZones;
- (void)setOnlyCompareSharedZones:;
+ (id)trimExcessiveValuesForLog:;
@end

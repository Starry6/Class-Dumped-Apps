@interface PLObjectSnapshot : NSObject
@property (nonatomic) PLManagedObject managedObject;
- (id)init;
- (id)_allSnapshotValuesDescription;
- (void)dealloc;
- (id)_snapshotValueForProperty:;
- (id)indexMapStateForDerivedObject:;
- (id)snapshotValueForProperty:;
- (id)filteredIndexesForFilter:;
- (id)initWithManagedObject:properties:toOneRelationships:indexMaps:useCommitedValues:;
- (id)managedObject;
- (BOOL)hasSnapshotValueForProperty:;
- (void).cxx_destruct;
- (id)description;
- (void)setAssetsSnapshot:;
+ (id)snapshotForManagedObject:changeNotificationCenter:useCommitedValues:;
+ (id)_createIndexMapsSnapshotForManagedObject:changeNotificationCenter:;
@end

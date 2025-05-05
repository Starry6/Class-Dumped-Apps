@interface IDSCKFetchRecordZoneChangesOperation : IDSCKDatabaseOperation
@property (nonatomic) BOOL fetchAllChanges;
@property (nonatomic) @? recordChangedBlock;
@property (nonatomic) @? recordWithIDWasDeletedBlock;
@property (nonatomic) @? recordZoneChangeTokensUpdatedBlock;
@property (nonatomic) @? recordZoneFetchCompletionBlock;
@property (nonatomic) @? fetchRecordZoneChangesCompletionBlock;
- (id)recordChangedBlock;
- (void)setRecordChangedBlock:;
- (void)setRecordZoneChangeTokensUpdatedBlock:;
- (void)setFetchAllChanges:;
- (BOOL)fetchAllChanges;
- (void)setRecordWithIDWasDeletedBlock:;
- (id)recordWithIDWasDeletedBlock;
- (id)recordZoneChangeTokensUpdatedBlock;
- (void)setRecordZoneFetchCompletionBlock:;
- (void)setFetchRecordZoneChangesCompletionBlock:;
- (id)recordZoneFetchCompletionBlock;
- (void).cxx_destruct;
- (id)fetchRecordZoneChangesCompletionBlock;
+ (id)alloc;
+ (Class)__class;
@end

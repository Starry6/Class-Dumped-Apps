@interface CPLEngineIgnoredRecords : CPLEngineStorage
@property (nonatomic) CPLPlatformObject platformObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ignoredRecordWithScopedIdentifier:;
- (id)ignoredRecordsBeforeDate:scopeIdentifier:maximumCount:;
- (BOOL)setIgnoredDate:forRecordWithScopedIdentifier:error:;
- (BOOL)hasRecordWithScopedIdentifier:;
- (unsigned long long)scopeType;
- (BOOL)deleteRecordsForScopeIndex:maxCount:deletedCount:error:;
- (BOOL)addIgnoredRecord:ignoredDate:otherScopeIndex:error:;
- (BOOL)removeRecordWithScopedIdentifier:error:;
- (id)recordWithScopedIdentifier:;
- (BOOL)scopeIdentifier:hasIgnoredRecordsBeforeDate:;
@end

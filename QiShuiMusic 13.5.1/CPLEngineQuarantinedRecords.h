@interface CPLEngineQuarantinedRecords : CPLEngineStorage
@property (nonatomic) CPLPlatformObject platformObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)addQuarantinedRecordWithScopedIdentifier:recordClass:reason:error:;
- (void)writeTransactionDidSucceed;
- (BOOL)resetRejectedRecordsWithError:;
- (BOOL)bumpRejectedRecords:error:;
- (unsigned long long)countOfQuarantinedRecords;
- (void)_sendQuarantineFeedbackWithRecordClass:reason:;
- (BOOL)removeQuarantinedRecordWithScopedIdentifier:notify:error:;
- (unsigned long long)scopeType;
- (BOOL)deleteRecordsForScopeIndex:maxCount:deletedCount:error:;
- (unsigned long long)countOfQuarantinedRecordsInScopeWithIdentifier:;
- (void).cxx_destruct;
- (void)writeTransactionDidFail;
- (BOOL)_quarantineRejectedRecords:error:;
- (BOOL)isRecordWithScopedIdentifierQuarantined:;
- (Class)classForQuarantinedRecordWithScopedIdentifier:;
+ (unsigned long long)quarantineRetryCount;
@end

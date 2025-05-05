@interface CPLEngineScopeCleanupTasks : CPLEngineStorage
@property (nonatomic) CPLPlatformObject platformObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)addCleanupTaskForScopeWithIndex:scopeIdentifier:scopeType:error:;
- (void)writeTransactionDidSucceed;
- (BOOL)hasCleanupTasks;
- (unsigned long long)scopeType;
- (void).cxx_destruct;
- (void)writeTransactionDidFail;
- (BOOL)cleanupStepHasMore:error:;
+ (id)scopeTypeDescriptionForScopeType:;
@end

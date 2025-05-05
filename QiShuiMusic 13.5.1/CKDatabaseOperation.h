@interface CKDatabaseOperation : CKOperation
@property (nonatomic) CKDatabaseOperationInfo operationInfo;
@property (nonatomic) CKDatabase database;
- (long long)databaseScope;
- (id)CKDescriptionPropertiesWithPublic:private:shouldExpand:;
- (void)setDatabase:;
- (void)fillFromOperationInfo:;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:;
- (id)database;
- (BOOL)CKOperationShouldRun:;
- (BOOL)zoneIDHasCorrectDatabaseScope:error:;
@end

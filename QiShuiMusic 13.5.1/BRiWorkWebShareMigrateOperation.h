@interface BRiWorkWebShareMigrateOperation : BROperation
@property (nonatomic) NSURL url;
@property (nonatomic) NSOperationQueue operationQueue;
@property (nonatomic) @? shareMigrationCompletionBlock;
- (id)url;
- (id)initWithURL:;
- (id)operationQueue;
- (void)setUrl:;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (void)setOperationQueue:;
- (void)_migrateShare;
- (void)_startSharingReadWrite:;
- (void)_copyShare;
- (id)shareMigrationCompletionBlock;
- (void)setShareMigrationCompletionBlock:;
@end

@interface WBSRetryableCKDatabaseOperation : WBSRetryableCKOperation
@property (nonatomic) CKDatabase database;
- (void)_setUpOperation:;
- (void)setDatabase:;
- (void).cxx_destruct;
- (id)database;
@end

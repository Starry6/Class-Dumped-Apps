@interface CPLEngineStoreTransaction : NSObject
@property (nonatomic) CPLEngineWriteTransactionBlocker blocker;
@property (nonatomic) NSError error;
@property (nonatomic) NSString name;
@property (nonatomic) CPLEngineStore store;
- (void)dealloc;
- (void)setName:;
- (id)blocker;
- (id)redactedDescription;
- (void)setError:;
- (void)addCleanupBlock:;
- (void)_releaseDirty;
- (id)error;
- (id)initForWrite:store:identifier:description:;
- (void)_transactionWillBeginOnThread:;
- (void)setBlocker:;
- (BOOL)canWrite;
- (void).cxx_destruct;
- (BOOL)_forWrite;
- (void)_transactionDidFinish;
- (id)description;
- (BOOL)canRead;
- (id)name;
- (BOOL)do:;
- (id)store;
@end

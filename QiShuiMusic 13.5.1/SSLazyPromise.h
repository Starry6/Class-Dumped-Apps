@interface SSLazyPromise : SSPromise
@property (nonatomic) @? block;
@property (nonatomic) NSLock executeBlockLock;
@property (nonatomic) BOOL executedBlock;
- (id)block;
- (void)setExecuteBlockLock:;
- (id)resultWithError:;
- (BOOL)_runBlock;
- (void)setExecutedBlock:;
- (id)initWithBlock:;
- (void)addSuccessBlock:;
- (void).cxx_destruct;
- (void)setBlock:;
- (id)resultBeforeDate:error:;
- (id)resultWithTimeout:error:;
- (id)executeBlockLock;
- (void)addErrorBlock:;
- (BOOL)executedBlock;
@end

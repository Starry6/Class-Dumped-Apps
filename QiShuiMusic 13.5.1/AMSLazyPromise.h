@interface AMSLazyPromise : AMSPromise
@property (nonatomic) NSLock lock;
@property (nonatomic) @? block;
@property (nonatomic) BOOL executedBlock;
@property (nonatomic) double timeout;
- (id)block;
- (id)initWithTimeout:block:;
- (id)resultWithError:;
- (BOOL)_runBlock;
- (void)setTimeout:;
- (void)setExecutedBlock:;
- (id)initWithBlock:;
- (id)lock;
- (void)addFinishBlock:;
- (void)addSuccessBlock:;
- (void).cxx_destruct;
- (double)timeout;
- (void)setBlock:;
- (id)resultBeforeDate:error:;
- (id)resultWithTimeout:error:;
- (void)addErrorBlock:;
- (void)setLock:;
- (BOOL)executedBlock;
@end

@interface PCSCKKSOperation : NSOperation
@property (nonatomic) NSMutableArray successDependencies;
@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) NSError error;
- (void)setFinished:;
- (void)setCancelled:;
- (BOOL)isCancelled;
- (void)setError:;
- (BOOL)isExecuting;
- (id)error;
- (void)completeOperation;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)setExecuting:;
- (BOOL)startOperation;
- (void)addSuccessDependency:;
- (BOOL)checkDependencies;
- (id)successDependencies;
- (void)setSuccessDependencies:;
+ (id)operation:block:;
@end

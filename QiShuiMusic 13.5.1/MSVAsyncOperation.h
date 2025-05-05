@interface MSVAsyncOperation : NSOperation
@property (nonatomic) NSError error;
@property (nonatomic) NSObject<OS_dispatch_queue> accessQueue;
@property (nonatomic) BOOL _executing;
@property (nonatomic) BOOL _finished;
- (id)accessQueue;
- (void)execute;
- (id)init;
- (void)start;
- (BOOL)isConcurrent;
- (BOOL)_isFinished;
- (void)setError:;
- (void)finish;
- (BOOL)isExecuting;
- (id)error;
- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)finishWithError:;
- (BOOL)_isExecuting;
- (void)_setFinished:;
- (void)_setExecuting:;
@end

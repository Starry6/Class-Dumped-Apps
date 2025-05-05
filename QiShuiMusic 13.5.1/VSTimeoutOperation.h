@interface VSTimeoutOperation : VSAsyncOperation
@property (nonatomic) NSOperationQueue privateQueue;
@property (nonatomic) NSOperation operation;
@property (nonatomic) double timeout;
- (id)privateQueue;
- (void)setPrivateQueue:;
- (id)operation;
- (void)executionDidBegin;
- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (double)timeout;
- (id)initWithOperation:timeout:;
@end

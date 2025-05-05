@interface CLRunLoopSiloThread : NSObject
@property (nonatomic) ^{_opaque_pthread_t=q^{__darwin_pthread_handler_rec}[8176c]} threadId;
@property (nonatomic) NSRunLoop underlyingRunLoop;
@property (nonatomic) NSThread underlyingThread;
@property (nonatomic) BOOL shouldCancelThread;
- (id)init;
- (void)dealloc;
- (id)underlyingRunLoop;
- (id)initWithRunLoop:;
- (id)underlyingThread;
- (void).cxx_destruct;
- (id)initWithCurrentThread;
- (BOOL)shouldCancelThread;
- (id)threadId;
@end

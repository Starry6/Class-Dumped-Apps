@interface VKFrameProcessor : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) NSObject<OS_dispatch_queue> resultHandlerQueue;
- (id)init;
- (void)cancel;
- (BOOL)isCancelled;
- (id)serialQueue;
- (BOOL)isExecuting;
- (void)unlock;
- (void)lock;
- (void).cxx_destruct;
- (void)reset;
- (void)setResultHandlerQueue:;
- (id)resultHandlerQueue;
- (BOOL)wantsThrottling;
- (void)processFrame:;
- (void)enqueueFrame:;
- (double)processingInterval;
- (void)setProcessingInterval:;
- (double)infrequentProcessingInterval;
- (void)setInfrequentProcessingInterval:;
- (void)requestImmediateProcessing;
+ (double)defaultProcessingInterval;
+ (double)defaultInfrequentProcessingInterval;
@end

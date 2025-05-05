@interface VCStatisticsCollectorQueue : NSObject
@property (nonatomic) BOOL isThreadRunning;
@property (nonatomic) @? messageHandler;
- (void)processMessage:;
- (BOOL)enqueue:;
- (void)dealloc;
- (void)start;
- (void)stop;
- (id)messageHandler;
- (void)setMessageHandler:;
- (int)queueSize;
- (id)initWithQueueSize:shouldBlockWhenFull:queueWaitTimeMs:useExternalThread:;
- (BOOL)addStatisticsMessage:;
- (void)drainAndProcessAllStatistics;
- (void)flushAllStatistics;
- (void)flushAllNonHighPriorityStatistics;
- (BOOL)shouldFlushOldMessagesWithCurrentMessagePriority:didFlushQueue:;
- (BOOL)isQueueFull;
- (BOOL)dequeue:;
- (void)stopThread;
- (void)cancelWait;
- (void)waitBeforeProcessingQueue;
- (BOOL)isThreadRunning;
@end

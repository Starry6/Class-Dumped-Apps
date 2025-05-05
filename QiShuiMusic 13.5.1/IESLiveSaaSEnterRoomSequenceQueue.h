@interface IESLiveSaaSEnterRoomSequenceQueue : NSObject
@property (nonatomic) q suspendCount;
@property (nonatomic) NSOperationQueue operationQueue;
@property (nonatomic) BOOL rooting;
- (BOOL)rooting;
- (void)executeSequenceTask:;
- (void)setRooting:;
- (long long)suspendCount;
- (id)init;
- (id)operationQueue;
- (void).cxx_destruct;
- (void)resumeQueue;
- (void)suspendQueue;
- (void)setOperationQueue:;
- (void)setSuspendCount:;
- (void)cancelAll;
@end

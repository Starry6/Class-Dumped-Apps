@interface AMapNetworkStackManager : NSObject
@property (nonatomic) NSMutableArray waitingStack;
@property (nonatomic) NSSet runloopModes;
@property (nonatomic) q runningCount;
@property (nonatomic) NSOperationQueue operationQueue;
- (void)deallocOperation;
- (void)handleOperationFinish;
- (void)pushOperation:;
- (void)pushOperationsToQueue;
- (long long)runningCount;
- (void)setRunloopModes:;
- (void)setRunningCount:;
- (void)setWaitingStack:;
- (id)startOperationWithRequestReformer:completionBlock:;
- (void)tryPopWaitingStack;
- (id)waitingStack;
- (void)cancelAllOperations;
- (id)init;
- (void)dealloc;
- (id)runloopModes;
- (id)operationQueue;
- (void).cxx_destruct;
- (void)startOperation:;
+ (void)networkStackManagerEntry:;
+ (id)networkStackManagerThread;
+ (id)defaultManager;
@end

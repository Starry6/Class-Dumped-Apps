@interface AWEParameteriedCreationTaskManager : NSObject
@property (nonatomic) NSOperationQueue queue;
@property (nonatomic) q totalOpCount;
@property (nonatomic) q needCancelOpCount;
@property (nonatomic) NSMutableArray readyOps;
@property (nonatomic) @? theCompletion;
@property (nonatomic) @? theCancelCallback;
@property (nonatomic) BOOL cancelSuccessFlag;
@property (nonatomic) NSMutableArray errors;
@property (nonatomic) BOOL willCancel;
@property (nonatomic) double startTime;
@property (nonatomic) @? finishedCallback;
@property (nonatomic) @? failedCallback;
@property (nonatomic) @? canceledCallback;
- (void)setFailedCallback:;
- (id)failedCallback;
- (void)setWillCancel:;
- (id)readyOps;
- (id)finishedCallback;
- (long long)totalOpCount;
- (void)setTotalOpCount:;
- (id)theCompletion;
- (long long)needCancelOpCount;
- (void)setNeedCancelOpCount:;
- (void)setCancelSuccessFlag:;
- (id)theCancelCallback;
- (BOOL)cancelSuccessFlag;
- (void)setTheCompletion:;
- (void)setTheCancelCallback:;
- (void)startExcuteWithCompletion:didCancel:;
- (void)cancelExcute;
- (void)setFinishedCallback:;
- (void)setReadyOps:;
- (id)init;
- (void)dealloc;
- (void)setStartTime:;
- (id)errors;
- (void)setQueue:;
- (void)addTask:;
- (void)setErrors:;
- (void).cxx_destruct;
- (id)canceledCallback;
- (id)queue;
- (double)startTime;
- (void)setCanceledCallback:;
- (BOOL)willCancel;
+ (id)createManagerAndHold;
@end

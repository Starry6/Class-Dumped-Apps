@interface MLTask : NSObject
@property (nonatomic) q state;
@property (nonatomic) NSError error;
@property (nonatomic) NSObject<OS_dispatch_queue> syncQueue;
@property (nonatomic) NSString taskIdentifier;
- (id)syncQueue;
- (id)taskIdentifier;
- (void)cancel;
- (void)setState:;
- (void)setError:;
- (id)initWithState:;
- (id)error;
- (void)resume;
- (long long)state;
- (void).cxx_destruct;
- (void)resumeWithTaskContext:;
- (BOOL)_canResume;
- (BOOL)_canCancel;
- (BOOL)_canSuspend;
- (BOOL)_canComplete;
- (BOOL)_canFail;
- (void)_resumeWithTaskContext:;
- (void)suspendWithTaskContext:;
- (void)completeWithTaskContext:;
- (void)failWithError:taskContext:;
- (id)taskStatesToString:;
@end

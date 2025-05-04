@interface AWEIMNetworkRequestTask : NSObject
@property (nonatomic) BFTaskCompletionSource task;
@property (nonatomic) <IESIMHttpTask> request;
@property (nonatomic) BFCancellationTokenSource cancellationToken;
@property (nonatomic) q state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTask:;
- (id)init;
- (void)resume;
- (id)task;
- (void)cancel;
- (long long)state;
- (void)setPriority:;
- (void).cxx_destruct;
- (void)suspend;
- (void)setRequest:;
- (id)request;
- (id)cancellationToken;
- (void)setCancellationToken:;
@end

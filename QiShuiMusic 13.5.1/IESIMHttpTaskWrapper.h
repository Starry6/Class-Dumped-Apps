@interface IESIMHttpTaskWrapper : NSObject
@property (nonatomic) TTHttpTask httpTask;
@property (nonatomic) float latestPriority;
@property (nonatomic) q retryOptions;
@property (nonatomic) @? wrapTaskBlock;
@property (nonatomic) q state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)httpTask;
- (float)latestPriority;
- (void)retryIfNeeded;
- (long long)retryOptions;
- (void)setHttpTask:;
- (void)setLatestPriority:;
- (void)setRetryOptions:;
- (void)setTaskBlock:;
- (id)wrapTaskBlock;
- (id)init;
- (void)cancel;
- (void)setPriority:;
- (void)dealloc;
- (void)suspend;
- (void)resume;
- (long long)state;
- (void).cxx_destruct;
@end

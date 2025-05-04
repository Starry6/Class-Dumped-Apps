@interface AWEHttpTaskWrapper : NSObject
@property (nonatomic) TTHttpTask httpTask;
@property (nonatomic) float latestPriority;
@property (nonatomic) q retryOptions;
@property (nonatomic) @? wrapTaskBlock;
@property (nonatomic) q state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHttpTask:;
- (id)httpTask;
- (long long)retryOptions;
- (void)setRetryOptions:;
- (void)setLatestPriority:;
- (float)latestPriority;
- (void)retryIfNeeded;
- (void)setTaskBlock:;
- (id)wrapTaskBlock;
- (id)init;
- (void)dealloc;
- (void)resume;
- (void)cancel;
- (long long)state;
- (void)setPriority:;
- (void).cxx_destruct;
- (void)suspend;
@end

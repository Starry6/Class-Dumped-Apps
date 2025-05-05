@interface AMSObserver : NSObject
@property (nonatomic) @? completionBlock;
@property (nonatomic) @? failureBlock;
@property (nonatomic) @? resultBlock;
- (void)setCompletionBlock:;
- (void)_sendCompletionUsingQueue:;
- (id)failureBlock;
- (void)setFailureBlock:;
- (void)_sendResult:usingQueue:;
- (id)initWithResultBlock:completionBlock:failureBlock:;
- (id)resultBlock;
- (id)initWithResultBlock:;
- (void)setResultBlock:;
- (void).cxx_destruct;
- (id)completionBlock;
- (void)_sendFailure:usingQueue:;
@end

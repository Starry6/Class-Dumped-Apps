@interface SSObserver : NSObject
@property (nonatomic) @? completionBlock;
@property (nonatomic) @? failureBlock;
@property (nonatomic) @? resultBlock;
- (void)setCompletionBlock:;
- (void)_sendCompletionUsingQueue:;
- (id)failureBlock;
- (void)setFailureBlock:;
- (void)_sendResult:usingQueue:;
- (id)resultBlock;
- (void)setResultBlock:;
- (void).cxx_destruct;
- (id)completionBlock;
- (void)_sendFailure:usingQueue:;
+ (id)observerWithResultBlock:;
+ (id)observerWithResultBlock:completionBlock:failureBlock:;
@end

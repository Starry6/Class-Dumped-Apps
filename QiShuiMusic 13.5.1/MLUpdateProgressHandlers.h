@interface MLUpdateProgressHandlers : NSObject
@property (nonatomic) q interestedEvents;
@property (nonatomic) @? progressHandler;
@property (nonatomic) @? completionHandler;
- (void)setProgressHandler:;
- (id)progressHandler;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (id)description;
- (id)completionHandler;
- (id)initForEvents:progressHandler:completionHandler:;
- (void)_dispatchUpdateProgressHandlerForEvent:metrics:parameters:error:onQueue:;
- (void)dispatchTrainingBeginProgressHandlerWithMetrics:parameters:onQueue:;
- (void)dispatchEpochEndProgressHandlerWithMetrics:parameters:onQueue:;
- (void)dispatchMiniBatchEndProgressHandlerWithMetrics:parameters:onQueue:;
- (void)dispatchTrainingCompletionHandlerWithMetrics:parameters:onQueue:;
- (void)dispatchTrainingCompletionHandlerWithError:onQueue:;
- (long long)interestedEvents;
- (void)setInterestedEvents:;
@end

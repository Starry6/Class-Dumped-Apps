@interface AWESearchAIGCHTTPPreloadTask : NSObject
@property (nonatomic) NSMutableArray callbacks;
@property (nonatomic) AWESearchAIGCHTTPPreloadRequest request;
@property (nonatomic) AWESearchAIGCHTTPPreloadResult result;
- (void)requestCompleteWithModel:error:;
- (void)startTaskWithRequest:;
- (void)addCompleteCallback:;
- (id)callbacks;
- (void)setCallbacks:;
- (void).cxx_destruct;
- (id)request;
- (id)result;
@end

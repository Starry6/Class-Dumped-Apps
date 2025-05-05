@interface HttpResourceLoadingRequest : NSObject
@property (nonatomic) BOOL finished;
@property (nonatomic) NSError error;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) NSCondition condition;
@property (nonatomic) ^v requestInfo;
@property (nonatomic) ^v responseInfo;
- (id)condition;
- (void)setFinished:;
- (void)setCancelled:;
- (void)setCondition:;
- (void)dealloc;
- (BOOL)isCancelled;
- (void)setError:;
- (id)error;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)finishLoading;
- (void)finishLoadingWithError:;
- (id)responseInfo;
- (void)setResponseInfo:;
- (id)requestInfo;
- (void)setRequestInfo:;
@end

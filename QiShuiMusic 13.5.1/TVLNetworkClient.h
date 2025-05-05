@interface TVLNetworkClient : NSObject
@property (nonatomic) NSURLSession session;
@property (nonatomic) NSURLSessionTask task;
@property (nonatomic) BOOL canceled;
- (void)invalidAndCancel;
- (void)requestWithURL:completion:;
- (BOOL)isCanceled;
- (void)setSession:;
- (id)init;
- (void)cancel;
- (id)task;
- (void)setTask:;
- (id)session;
- (void).cxx_destruct;
- (void)setCanceled:;
@end

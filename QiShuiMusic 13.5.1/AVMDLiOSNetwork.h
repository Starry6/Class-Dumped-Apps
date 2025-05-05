@interface AVMDLiOSNetwork : NSObject
@property (nonatomic) NSURLSession session;
@property (nonatomic) NSURLSessionDataTask urlRequest;
@property (nonatomic) BOOL didCallCancel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_splitUrl:params:;
- (void)configTaskWithURL:params:headers:completion:;
- (BOOL)didCallCancel;
- (BOOL)evaluateServerTrust:forDomain:;
- (void)invalidAndCancel;
- (void)setDidCallCancel:;
- (BOOL)cancelled;
- (void)setSession:;
- (void)URLSession:task:didReceiveChallenge:completionHandler:;
- (void)cancel;
- (void)dealloc;
- (id)initWithTimeout:;
- (void)resume;
- (id)urlRequest;
- (id)session;
- (void).cxx_destruct;
- (void)setUrlRequest:;
@end

@interface TTVideoEngineNetwork : NSObject
@property (nonatomic) NSURLSession session;
@property (nonatomic) NSURLSessionDataTask urlRequest;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL useEphemeralSession;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configPostTaskWithURL:params:headers:completion:;
- (void)configTaskWithURL:completion:;
- (void)configTaskWithURL:params:headers:completion:;
- (BOOL)evaluateServerTrust:forDomain:;
- (void)invalidAndCancel;
- (void)setUseEphemeralSession:;
- (BOOL)useEphemeralSession;
- (void)setSession:;
- (void)URLSession:task:didReceiveChallenge:completionHandler:;
- (void)cancel;
- (id)initWithTimeout:;
- (void)setTimeout:;
- (void)resume;
- (id)urlRequest;
- (id)session;
- (void).cxx_destruct;
- (double)timeout;
- (void)setupSession;
- (void)setUrlRequest:;
@end

@interface TTHttpTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q state;
@property (nonatomic) double recvHeaderTimeout;
@property (nonatomic) double readDataTimeout;
@property (nonatomic) double protectTimeout;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL skipSSLCertificateError;
@property (nonatomic) BOOL isStreamingTask;
@property (nonatomic) BOOL enableHttpCache;
@property (nonatomic) BOOL enableCustomizedCookie;
@property (nonatomic) q loadFlags;
@property (nonatomic) I requestTypeFlags;
@property (nonatomic) NSString originalHost;
@property (nonatomic) NSString dispatchedHost;
@property (nonatomic) double dispatchTime;
@property (nonatomic) BOOL sentAlready;
- (BOOL)enableHttpCache;
- (double)readDataTimeout;
- (void)setSentAlready:;
- (BOOL)isStreamingTask;
- (id)dispatchedHost;
- (BOOL)enableCustomizedCookie;
- (long long)loadFlags;
- (double)protectTimeout;
- (double)recvHeaderTimeout;
- (unsigned int)requestTypeFlags;
- (BOOL)sentAlready;
- (void)setDispatchedHost:;
- (void)setDownloadProgressCallback:;
- (void)setEnableCustomizedCookie:;
- (void)setEnableHttpCache:;
- (void)setHeaderCallback:;
- (void)setIsStreamingTask:;
- (void)setLoadFlags:;
- (void)setProtectTimeout:;
- (void)setReadDataTimeout:;
- (void)setRecvHeaderTimeout:;
- (void)setRequestTypeFlags:;
- (void)setSkipSSLCertificateError:;
- (void)setThrottleNetSpeed:;
- (void)setUploadProgressCallback:;
- (BOOL)skipSSLCertificateError;
- (void)cancel;
- (void)setPriority:;
- (void)readDataOfMinLength:maxLength:timeout:completionHandler:;
- (void)suspend;
- (id)request;
- (void)resume;
- (double)timeoutInterval;
- (id)originalHost;
- (long long)state;
- (void).cxx_destruct;
- (void)setOriginalHost:;
- (void)setTimeoutInterval:;
- (double)dispatchTime;
- (void)setDispatchTime:;
@end

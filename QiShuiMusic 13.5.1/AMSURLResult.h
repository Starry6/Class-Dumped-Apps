@interface AMSURLResult : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSString logUUID;
@property (nonatomic) NSURLSessionTaskMetrics taskMetrics;
@property (nonatomic) NSURLResponse response;
@property (nonatomic) NSURLSessionTask task;
@property (nonatomic) @ object;
@property (nonatomic) NSString responseCorrelationId;
@property (nonatomic) q responseStatusCode;
@property (nonatomic) NSDictionary responseHeaders;
- (void)setObject:;
- (id)initWithTask:response:data:object:;
- (long long)responseStatusCode;
- (void)setLogUUID:;
- (id)initWithResult:;
- (id)initWithTaskInfo:object:;
- (id)data;
- (id)responseHeaders;
- (id)logUUID;
- (id)task;
- (id)responseCorrelationId;
- (id)taskMetrics;
- (void)setTask:;
- (id)response;
- (void).cxx_destruct;
- (id)object;
- (void)setData:;
- (void)setResponse:;
@end

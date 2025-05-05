@interface APHTTPRequestOperation : APURLConnectionOperation
@property (nonatomic) NSURLRequest request;
@property (nonatomic) NSHTTPURLResponse response;
@property (nonatomic) NSError HTTPError;
@property (nonatomic) NSRecursiveLock lock;
@property (nonatomic) BOOL hasAcceptableStatusCode;
@property (nonatomic) BOOL hasAcceptableContentType;
@property (nonatomic) NSObject<OS_dispatch_queue> successCallbackQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> failureCallbackQueue;
- (id)HTTPError;
- (id)failureCallbackQueue;
- (BOOL)hasAcceptableContentType;
- (BOOL)hasAcceptableStatusCode;
- (unsigned long long)responseStringEncoding;
- (void)setCompletionBlockWithSuccess:failure:;
- (void)setFailureCallbackQueue:;
- (void)setHTTPError:;
- (void)setSuccessCallbackQueue:;
- (id)successCallbackQueue;
- (void)dealloc;
- (id)error;
- (void).cxx_destruct;
- (void)pause;
+ (id)acceptableContentTypes;
+ (id)acceptableStatusCodes;
+ (void)addAcceptableContentTypes:;
+ (void)addAcceptableStatusCodes:;
+ (BOOL)canProcessRequest:;
@end

@interface HSRequest : NSObject
@property (nonatomic) NSString action;
@property (nonatomic) BOOL concurrent;
@property (nonatomic) q method;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) NSData bodyData;
@property (nonatomic) BOOL acceptsGzipEncoding;
- (id)initWithAction:;
- (BOOL)isConcurrent;
- (long long)method;
- (id)action;
- (id)bodyData;
- (double)timeoutInterval;
- (void).cxx_destruct;
- (id)description;
- (void)setMethod:;
- (void)setValue:forArgument:;
- (void)setBodyData:;
- (BOOL)acceptsGzipEncoding;
- (id)canonicalResponseForResponse:;
- (id)requestURLForBaseURL:sessionID:;
- (id)URLRequestForBaseURL:sessionID:;
+ (id)request;
@end

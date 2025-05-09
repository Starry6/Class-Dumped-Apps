@interface PIANetworkRequestParam : NSObject
@property (nonatomic) NSString URLString;
@property (nonatomic) NSData requestBody;
@property (nonatomic) NSDictionary requestQuery;
@property (nonatomic) NSDictionary allHTTPHeaderFields;
@property (nonatomic) Q tagType;
@property (nonatomic) q responseType;
@property (nonatomic) q engineType;
@property (nonatomic) q methodType;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL enableHTTPCache;
@property (nonatomic) BOOL enableAutoResume;
@property (nonatomic) BOOL enableCommonParams;
- (BOOL)enableHTTPCache;
- (BOOL)enableAutoResume;
- (BOOL)enableCommonParams;
- (id)generateNSURLRequest:;
- (long long)methodType;
- (id)requestQuery;
- (void)setEnableAutoResume:;
- (void)setEnableCommonParams:;
- (void)setEnableHTTPCache:;
- (void)setMethodType:;
- (void)setRequestQuery:;
- (id)requestBody;
- (unsigned long long)tagType;
- (id)init;
- (id)URLString;
- (double)timeoutInterval;
- (long long)engineType;
- (void).cxx_destruct;
- (void)setTimeoutInterval:;
- (void)setEngineType:;
- (id)allHTTPHeaderFields;
- (void)setAllHTTPHeaderFields:;
- (long long)responseType;
- (void)setURLString:;
- (void)setTagType:;
- (void)setRequestBody:;
- (void)setResponseType:;
@end

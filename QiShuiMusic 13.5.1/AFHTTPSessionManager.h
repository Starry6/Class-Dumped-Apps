@interface AFHTTPSessionManager : AFURLSessionManager
@property (nonatomic) NSURL baseURL;
@property (nonatomic) AFHTTPRequestSerializer<AFURLRequestSerialization> requestSerializer;
@property (nonatomic) AFHTTPResponseSerializer<AFURLResponseSerialization> responseSerializer;
- (id)GET:parameters:success:failure:;
- (id)PUT:parameters:success:failure:;
- (id)PATCH:parameters:success:failure:;
- (id)DELETE:parameters:success:failure:;
- (id)HEAD:parameters:success:failure:;
- (id)POST:parameters:constructingBodyWithBlock:success:failure:;
- (id)POST:parameters:success:failure:;
- (id)dataTaskWithHTTPMethod:URLString:parameters:success:failure:;
- (id)initWithBaseURL:sessionConfiguration:;
- (id)requestSerializer;
- (void)setRequestSerializer:;
- (void)setResponseSerializer:;
- (id)init;
- (void)setBaseURL:;
- (id)baseURL;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithBaseURL:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithSessionConfiguration:;
+ (BOOL)supportsSecureCoding;
+ (id)manager;
@end

@interface BU_AFHTTPSessionManager : BU_AFURLSessionManager
@property (nonatomic) NSURL baseURL;
@property (nonatomic) BU_AFHTTPRequestSerializer<BU_AFURLRequestSerialization> requestSerializer;
@property (nonatomic) BU_AFHTTPResponseSerializer<BU_AFURLResponseSerialization> responseSerializer;
@property (nonatomic) BU_AFSecurityPolicy securityPolicy;
- (id)GET:parameters:success:failure:;
- (id)GET:parameters:progress:success:failure:;
- (id)POST:parameters:progress:success:failure:;
- (id)POST:parameters:success:failure:;
- (id)dataTaskWithHTTPMethod:URLString:parameters:uploadProgress:downloadProgress:success:failure:;
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
- (void)setSecurityPolicy:;
- (id)initWithSessionConfiguration:;
+ (BOOL)supportsSecureCoding;
+ (id)manager;
@end

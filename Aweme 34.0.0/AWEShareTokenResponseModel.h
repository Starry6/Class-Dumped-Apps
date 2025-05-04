@interface AWEShareTokenResponseModel : MTLModel
@property (nonatomic) q statusCode;
@property (nonatomic) NSString statusMessage;
@property (nonatomic) NSString command;
@property (nonatomic) NSString commandV2;
@property (nonatomic) NSString tokenTemplate;
@property (nonatomic) q expireTime;
@property (nonatomic) NSString bizData;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSString eventExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bizData;
- (id)eventExtra;
- (id)tokenTemplate;
- (void)setTokenTemplate:;
- (id)commandV2;
- (long long)statusCode;
- (id)command;
- (id)extra;
- (void).cxx_destruct;
- (long long)expireTime;
- (id)statusMessage;
+ (id)JSONKeyPathsByPropertyKey;
@end

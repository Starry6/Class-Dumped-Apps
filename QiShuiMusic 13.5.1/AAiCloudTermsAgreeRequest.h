@interface AAiCloudTermsAgreeRequest : AARequest
@property (nonatomic) ACAccount account;
@property (nonatomic) BOOL preferPassword;
@property (nonatomic) NSDictionary additionalHeaders;
- (id)account;
- (void)setAccount:;
- (id)initWithURLString:account:;
- (id)urlRequest;
- (void).cxx_destruct;
- (void)performRequestWithHandler:;
- (id)additionalHeaders;
- (void)setAdditionalHeaders:;
- (BOOL)preferPassword;
- (void)setPreferPassword:;
+ (Class)responseClass;
@end

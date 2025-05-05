@interface AAGenericTermsUIRequest : AARequest
@property (nonatomic) NSDictionary requestDictionary;
@property (nonatomic) ACAccount account;
@property (nonatomic) NSDictionary additionalHeaders;
@property (nonatomic) BOOL preferPassword;
- (id)account;
- (id)urlString;
- (id)initWithParameters:;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)additionalHeaders;
- (void)setAdditionalHeaders:;
- (id)requestDictionary;
- (id)initWithAccount:parameters:;
- (id)initWithAccount:parameters:preferPassword:;
- (id)initWithTermsEntries:;
- (id)initWithAccount:termsEntries:;
- (id)_requestParamsForTermsEntries:;
- (BOOL)preferPassword;
- (void)setPreferPassword:;
+ (Class)responseClass;
@end

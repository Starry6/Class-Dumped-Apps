@interface AMSAuthKitUpdateResult : NSObject
@property (nonatomic) ACAccount account;
@property (nonatomic) NSDictionary authenticationResults;
@property (nonatomic) Q credentialSource;
- (id)account;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)authenticationResults;
- (unsigned long long)credentialSource;
- (id)initWithAccount:authenticationResults:options:;
- (id)initWithAccount:authenticationResults:credentialSource:options:;
+ (BOOL)supportsSecureCoding;
+ (id)_createUpdatedAccount:usingAuthenticationResults:options:;
@end

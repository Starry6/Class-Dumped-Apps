@interface AMSAuthenticateResult : NSObject
@property (nonatomic) AMSAuthKitUpdateResult authKitUpdateResult;
@property (nonatomic) ACAccount account;
@property (nonatomic) NSDictionary authenticationResults;
@property (nonatomic) NSDictionary serverResponse;
- (id)account;
- (id)initWithCoder:;
- (id)serverResponse;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)authenticationResults;
- (id)initWithAccount:;
- (id)authKitUpdateResult;
- (void)setAuthKitUpdateResult:;
+ (BOOL)supportsSecureCoding;
@end

@interface AMSDelegateAuthenticateResult : NSObject
@property (nonatomic) AMSDelegateAuthenticateRequest request;
@property (nonatomic) NSDictionary serverResponse;
@property (nonatomic) NSString token;
- (id)token;
- (id)initWithCoder:;
- (id)request;
- (id)serverResponse;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithServerResponse:;
+ (BOOL)supportsSecureCoding;
@end

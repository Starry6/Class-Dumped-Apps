@interface AMSAuthenticateRequest : NSObject
@property (nonatomic) ACAccount account;
@property (nonatomic) NSString logKey;
@property (nonatomic) AMSAuthenticateOptions options;
@property (nonatomic) NSDictionary userInfo;
- (id)account;
- (void)setOptions:;
- (void)setAccount:;
- (id)userInfo;
- (void)setLogKey:;
- (id)logKey;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)options;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAccount:options:;
- (id)initWithDSID:altDSID:username:options:;
+ (BOOL)supportsSecureCoding;
@end

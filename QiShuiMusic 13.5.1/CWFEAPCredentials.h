@interface CWFEAPCredentials : NSObject
@property (nonatomic) NSString username;
@property (nonatomic) NSString password;
@property (nonatomic) ^{__SecIdentity=} TLSIdentity;
@property (nonatomic) r^v TLSIdentityHandle;
- (void)setPassword:;
- (id)username;
- (id)password;
- (void)dealloc;
- (void)setUsername:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)TLSIdentity;
- (void)setTLSIdentity:;
- (id)TLSIdentityHandle;
- (void)setTLSIdentityHandle:;
- (BOOL)isEqualToEAPCredentials:;
+ (BOOL)supportsSecureCoding;
@end

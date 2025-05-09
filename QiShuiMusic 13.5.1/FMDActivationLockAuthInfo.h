@interface FMDActivationLockAuthInfo : NSObject
@property (nonatomic) NSString pet;
@property (nonatomic) NSString username;
@property (nonatomic) BOOL isFindMyON;
@property (nonatomic) BOOL isActivationLockEnabled;
@property (nonatomic) BOOL isSignedIntoICloud;
@property (nonatomic) BOOL isAccountHSA2;
@property (nonatomic) NSString dsid;
@property (nonatomic) NSString altDsid;
- (id)username;
- (id)dsid;
- (void)setDsid:;
- (void)setUsername:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isActivationLockEnabled;
- (id)pet;
- (void)setPet:;
- (BOOL)isFindMyON;
- (void)setIsFindMyON:;
- (void)setIsActivationLockEnabled:;
- (BOOL)isSignedIntoICloud;
- (void)setIsSignedIntoICloud:;
- (BOOL)isAccountHSA2;
- (void)setIsAccountHSA2:;
- (id)altDsid;
- (void)setAltDsid:;
+ (BOOL)supportsSecureCoding;
@end

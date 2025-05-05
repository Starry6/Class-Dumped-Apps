@interface NSURLCredential : NSObject
@property (nonatomic) Q persistence;
- (unsigned long long)persistence;
- (id)certificates;
- (id)password;
- (id)identity;
- (void)dealloc;
- (id)initWithTrust:;
- (void)_removeSWCACreatorAttribute;
- (id)initWithIdentity:certificates:persistence:;
- (BOOL)_hasSWCACreatorAttribute;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)hasPassword;
- (id)_CFURLCredential;
- (id)_cfurlcredential;
- (void)encodeWithCoder:;
- (id)user;
- (id)_initWithCFURLCredential:;
- (id)description;
- (id)initWithUser:password:persistence:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)safari_credentialWithUser:password:persistence:;
+ (BOOL)supportsSecureCoding;
+ (id)credentialWithUser:password:persistence:;
+ (id)credentialWithIdentity:certificates:persistence:;
+ (id)credentialForTrust:;
@end

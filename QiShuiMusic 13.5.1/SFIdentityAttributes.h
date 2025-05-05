@interface SFIdentityAttributes : NSObject
@property (nonatomic) NSString identityName;
@property (nonatomic) _SFAsymmetricKeySpecifier keySpecifier;
@property (nonatomic) BOOL hasCertificate;
@property (nonatomic) NSString privateKeyDomain;
@property (nonatomic) NSString localizedLabel;
@property (nonatomic) NSString localizedDescription;
@property (nonatomic) NSString persistentIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)localizedDescription;
- (id)initWithCoder:;
- (id)persistentIdentifier;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setLocalizedLabel:;
- (void)setLocalizedDescription:;
- (id)keySpecifier;
- (void)setKeySpecifier:;
- (id)localizedLabel;
- (id)copyWithZone:;
- (BOOL)hasCertificate;
- (id)identityName;
- (id)privateKeyDomain;
- (void)setIdentityName:;
+ (BOOL)supportsSecureCoding;
@end

@interface DMFCertificate : NSObject
@property (nonatomic) NSString commonName;
@property (nonatomic) NSData data;
@property (nonatomic) BOOL isIdentity;
- (id)data;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isIdentity;
- (id)commonName;
- (id)initWithCommonName:data:isIdentity:;
+ (BOOL)supportsSecureCoding;
@end

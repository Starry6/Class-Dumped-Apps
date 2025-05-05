@interface NSPConfigurationSignatureInfo : NSObject
@property (nonatomic) NSArray certificates;
@property (nonatomic) NSData signature;
@property (nonatomic) Q signatureAlgorithm;
- (void)setCertificates:;
- (BOOL)saveToPreferences;
- (void)setSignature:;
- (id)certificates;
- (id)signature;
- (id)initFromPreferences;
- (id)initWithCoder:;
- (unsigned long long)signatureAlgorithm;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setSignatureAlgorithm:;
+ (BOOL)supportsSecureCoding;
+ (void)removeFromPreferences;
@end

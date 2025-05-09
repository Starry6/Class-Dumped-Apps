@interface TKTokenKeychainCertificate : TKTokenKeychainItem
@property (nonatomic) NSData subject;
@property (nonatomic) NSData issuer;
@property (nonatomic) NSData serialNumber;
@property (nonatomic) NSData subjectKeyID;
@property (nonatomic) NSData publicKeyHash;
@property (nonatomic) NSNumber certificateType;
@property (nonatomic) NSNumber certificateEncoding;
@property (nonatomic) NSData data;
- (id)serialNumber;
- (id)subject;
- (void)setSubject:;
- (void)setSerialNumber:;
- (id)data;
- (id)keychainAttributes;
- (void).cxx_destruct;
- (id)issuer;
- (void)setIssuer:;
- (id)publicKeyHash;
- (void)setPublicKeyHash:;
- (id)certificateType;
- (void)setCertificateType:;
- (id)initWithItemInfo:;
- (id)encodedObjectID;
- (id)initWithCertificate:objectID:;
- (id)subjectKeyID;
- (void)setSubjectKeyID:;
- (id)certificateEncoding;
- (void)setCertificateEncoding:;
@end

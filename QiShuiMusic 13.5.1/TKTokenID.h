@interface TKTokenID : NSObject
@property (nonatomic) NSString stringRepresentation;
@property (nonatomic) NSString classID;
@property (nonatomic) NSString instanceID;
- (id)instanceID;
- (id)stringRepresentation;
- (id)decodedCertificateID:error:;
- (id)initWithClassID:instanceID:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)decodedKeyID:error:;
- (void)encodeWithCoder:;
- (id)decodedObjectID:isCertificate:error:;
- (void).cxx_destruct;
- (id)classID;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithTokenID:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)encodedKeyID:;
+ (id)encodedCertificateID:;
@end

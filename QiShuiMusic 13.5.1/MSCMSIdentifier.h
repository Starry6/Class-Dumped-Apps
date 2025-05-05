@interface MSCMSIdentifier : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) ^{IssuerAndSerialNumber={heim_base_data=Q^v}{heim_integer=Q^vi}} issuerAndSerialNumber;
@property (nonatomic) ^{heim_base_data=Q^v} subjectKeyId;
@property (nonatomic) NSData skidData;
@property (nonatomic) NSData serialNumberData;
@property (nonatomic) NSData issuerNameData;
- (void)setType:;
- (int)type;
- (void).cxx_destruct;
- (id)initWithSkid:;
- (id)initWithIssuerName:serialNumber:;
- (id)encodeMessageSecurityObject:;
- (id)issuerAndSerialNumber;
- (void)setIssuerAndSerialNumber:;
- (id)subjectKeyId;
- (void)setSubjectKeyId:;
- (id)skidData;
- (void)setSkidData:;
- (id)serialNumberData;
- (void)setSerialNumberData:;
- (id)issuerNameData;
- (void)setIssuerNameData:;
+ (id)decodeIdentifier:error:;
@end

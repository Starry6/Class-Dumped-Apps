@interface MSCMSRecipientInfo : NSObject
@property (nonatomic) NSArray algorithmCapabilities;
@property (nonatomic) NSNumber version;
@property (nonatomic) NSData encryptedKey;
@property (nonatomic) MSAlgorithmIdentifier keyEncryptionAlgorithm;
@property (nonatomic) ^{__SecCertificate=} recipientCertificate;
- (void)setVersion:;
- (id)version;
- (id)key;
- (void).cxx_destruct;
- (id)initWithCertificate:;
- (id)encryptedKey;
- (void)setEncryptedKey:;
- (id)recipientCertificate;
- (id)initWithEmail:;
- (id)initWithCertificate:keyEncryptionAlgorithm:;
- (id)initWithEmail:keyEncryptionAlgorithm:;
- (id)initWithCertificate:algorithmCapabilities:;
- (id)initWithEmail:algorithmCapabilities:;
- (id)keyEncryptionAlgorithm;
- (void)setKeyEncryptionAlgorithm:;
- (void)setRecipientCertificate:;
- (id)algorithmCapabilities;
- (void)setAlgorithmCapabilities:;
+ (id)decodeRecipientInfo:certificates:LAContext:error:;
@end

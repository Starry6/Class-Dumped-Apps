@interface BDXBridgeLynxSignSuite : NSObject
@property (nonatomic) Q encryptionType;
@property (nonatomic) Q digestType;
@property (nonatomic) NSData signatureData;
- (unsigned long long)digestType;
- (void)setDigestType:;
- (void).cxx_destruct;
- (id)signatureData;
- (void)setSignatureData:;
- (unsigned long long)encryptionType;
- (void)setEncryptionType:;
@end

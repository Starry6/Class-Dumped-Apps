@interface IDSGroupSessionDataCryptor : NSObject
- (void)dealloc;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithTopic:;
- (id)initWithTopic:keyManager:;
- (id)encryptData:sequenceNumber:error:;
- (id)getEncryptionKeyID;
- (id)decryptData:keyID:sequenceNumber:error:;
- (id)getDecryptionKeyIDSet;
- (BOOL)isEqualToCryptor:;
+ (BOOL)supportsSecureCoding;
@end

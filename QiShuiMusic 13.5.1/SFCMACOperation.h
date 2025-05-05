@interface SFCMACOperation : SFMessageAuthenticationCodeOperation
@property (nonatomic) SFSymmetricEncryptionOperation encryptionOperation;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)encryptionOperation;
- (id)initWithEncryptionOperation:;
- (void)setEncryptionOperation:;
@end

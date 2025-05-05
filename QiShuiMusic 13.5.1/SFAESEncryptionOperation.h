@interface SFAESEncryptionOperation : SFSymmetricEncryptionOperation
@property (nonatomic) _SFAESKeySpecifier encryptionKeySpecifier;
- (id)decrypt:withKey:error:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)encrypt:withKey:error:;
- (void).cxx_destruct;
- (id)initWithKeySpecifier:mode:;
@end

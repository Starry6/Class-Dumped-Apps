@interface SFRSA_WrappedKeyEncryptionOperation : NSObject
@property (nonatomic) SFRSAEncryptionOperation keyWrappingOperation;
@property (nonatomic) SFSymmetricEncryptionOperation sessionEncryptionOperation;
@property (nonatomic) _SFKeySpecifier encryptionKeySpecifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)decrypt:withKey:error:;
- (id)initWithCoder:;
- (id)encryptionKeySpecifier;
- (void)encodeWithCoder:;
- (id)encrypt:withKey:error:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)keyWrappingOperation;
- (id)sessionEncryptionOperation;
- (id)initWithKeyWrappingOperation:;
- (id)initWithKeyWrappingOperation:sessionEncryptionOperation:;
- (void)setKeyWrappingOperation:;
- (void)setSessionEncryptionOperation:;
+ (BOOL)supportsSecureCoding;
@end

@interface SFSymmetricEncryptionOperation : NSObject
@property (nonatomic) q mode;
@property (nonatomic) _SFSymmetricKeySpecifier encryptionKeySpecifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)encrypt:withKey:ivGenerator:error:;
- (id)initWithKeySpecifier:;
- (id)decrypt:withKey:error:;
- (id)initWithCoder:;
- (id)encryptionKeySpecifier;
- (void)encodeWithCoder:;
- (id)encrypt:withKey:error:;
- (void).cxx_destruct;
- (long long)mode;
- (void)setEncryptionKeySpecifier:;
- (void)setMode:;
- (id)copyWithZone:;
- (id)initWithKeySpecifier:mode:;
+ (BOOL)supportsSecureCoding;
+ (id)_defaultEncryptionOperation;
+ (long long)_defaultEncryptionMode;
@end

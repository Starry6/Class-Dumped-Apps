@interface SFRSAEncryptionOperation : NSObject
@property (nonatomic) _SFRSAKeySpecifier encryptionKeySpecifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithKeySpecifier:;
- (id)decrypt:withKey:error:;
- (id)initWithCoder:;
- (id)encryptionKeySpecifier;
- (void)encodeWithCoder:;
- (id)encrypt:withKey:error:;
- (void).cxx_destruct;
- (void)setEncryptionKeySpecifier:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)_defaultEncryptionOperation;
@end

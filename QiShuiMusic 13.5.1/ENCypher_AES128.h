@interface ENCypher_AES128 : NSObject
@property (nonatomic) NSData key;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)key;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setKey:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithKey:;
- (BOOL)isEqual:;
- (id)cypherData:withAccountIdentity:identifier:error:;
- (id)decypherData:withAccountIdentity:signingDevicePublicKey:identifier:error:;
- (id)initWithRandomKey;
+ (BOOL)supportsSecureCoding;
+ (id)_randomDataWithLength:;
+ (id)_encryptData:withKey:;
+ (id)_decryptData:withKey:;
@end

@interface SACFScriptEncryptionParameters : SABaseAceObject
@property (nonatomic) NSData encryptionKey;
@property (nonatomic) NSData hmac;
@property (nonatomic) NSData hmacKey;
@property (nonatomic) NSData initializationVector;
@property (nonatomic) NSString type;
- (void)setEncryptionKey:;
- (id)groupIdentifier;
- (void)setType:;
- (id)initializationVector;
- (id)type;
- (id)encodedClassName;
- (id)encryptionKey;
- (void)setInitializationVector:;
- (id)hmacKey;
- (id)hmac;
- (void)setHmac:;
- (void)setHmacKey:;
+ (id)scriptEncryptionParameters;
+ (id)scriptEncryptionParametersWithDictionary:context:;
@end

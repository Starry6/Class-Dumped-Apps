@interface WBSHistoryCrypto : NSObject
@property (nonatomic) NSData salt;
@property (nonatomic) NSData cryptographicKey;
- (id)init;
- (id)salt;
- (id)cryptographicKey;
- (id)initWithCryptographicKey:salt:;
- (void).cxx_destruct;
- (id)_createOrLoadCryptographicKey;
- (id)decryptDictionary:;
- (id)_createCryptographicKey;
- (id)encryptDictionary:;
@end

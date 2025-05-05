@interface MRCryptoPairingIdentity : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSData publicKey;
@property (nonatomic) NSData privateKey;
- (id)privateKey;
- (id)init;
- (id)publicKey;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:publicKey:privateKey:;
@end

@interface CUPairingIdentity : NSObject
@property (nonatomic) NSData altIRK;
@property (nonatomic) NSUUID identifier;
@property (nonatomic) NSData publicKey;
@property (nonatomic) NSData secretKey;
- (void)setAltIRK:;
- (void)setSecretKey:;
- (id)publicKey;
- (void)setPublicKey:;
- (id)identifier;
- (id)initWithCoder:;
- (id)altIRK;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)secretKey;
- (void)setIdentifier:;
+ (BOOL)supportsSecureCoding;
@end

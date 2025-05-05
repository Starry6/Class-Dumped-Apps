@interface MRCryptoPairingMessage : MRProtocolMessage
@property (nonatomic) NSData pairingData;
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL retrying;
@property (nonatomic) BOOL usingSystemPairing;
@property (nonatomic) Q state;
- (unsigned long long)type;
- (unsigned long long)state;
- (int)status;
- (unsigned long long)encryptionType;
- (id)pairingData;
- (BOOL)isRetrying;
- (BOOL)isUsingSystemPairing;
- (id)initWithPairingData:status:;
- (id)initWithPairingData:status:isRetrying:isUsingSystemPairing:state:;
@end

@interface FMDPairingLockUpdateRequestInfo : NSObject
@property (nonatomic) NSString pairingCheckToken;
@property (nonatomic) NSString lostModePubKey;
@property (nonatomic) NSString userPrivateKey;
@property (nonatomic) NSString serialNumber;
@property (nonatomic) NSString timeStamp;
- (id)serialNumber;
- (void)setSerialNumber:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)timeStamp;
- (void)setTimeStamp:;
- (id)pairingCheckToken;
- (void)setPairingCheckToken:;
- (id)lostModePubKey;
- (void)setLostModePubKey:;
- (id)userPrivateKey;
- (void)setUserPrivateKey:;
+ (BOOL)supportsSecureCoding;
@end

@interface FMDPairingLockRegisterRequestInfo : NSObject
@property (nonatomic) NSString serialNumber;
@property (nonatomic) NSString accessoryType;
@property (nonatomic) NSString lostModePublicKey;
- (id)serialNumber;
- (void)setSerialNumber:;
- (id)initWithCoder:;
- (id)accessoryType;
- (void)encodeWithCoder:;
- (void)setAccessoryType:;
- (void).cxx_destruct;
- (id)lostModePublicKey;
- (void)setLostModePublicKey:;
+ (BOOL)supportsSecureCoding;
@end

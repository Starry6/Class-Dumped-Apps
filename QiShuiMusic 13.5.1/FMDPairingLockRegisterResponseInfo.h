@interface FMDPairingLockRegisterResponseInfo : NSObject
@property (nonatomic) NSString serialNumber;
@property (nonatomic) NSString pairingToken;
- (id)serialNumber;
- (void)setSerialNumber:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)pairingToken;
- (void)setPairingToken:;
+ (BOOL)supportsSecureCoding;
@end

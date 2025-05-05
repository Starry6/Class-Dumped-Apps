@interface IDSLocalPairingAddPairedDeviceInfo : NSObject
@property (nonatomic) NSUUID cbuuid;
@property (nonatomic) q pairingProtocolVersion;
@property (nonatomic) NSData BTOutOfBandKey;
@property (nonatomic) BOOL supportsIPsecWithSPPLink;
@property (nonatomic) q pairingType;
@property (nonatomic) NSData bluetoothMACAddress;
@property (nonatomic) BOOL shouldPairDirectlyOverIPsec;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCBUUID:pairingProtocolVersion:BTOutOfBandKey:;
- (id)cbuuid;
- (long long)pairingProtocolVersion;
- (id)BTOutOfBandKey;
- (BOOL)supportsIPsecWithSPPLink;
- (void)setSupportsIPsecWithSPPLink:;
- (id)bluetoothMACAddress;
- (void)setBluetoothMACAddress:;
- (BOOL)shouldPairDirectlyOverIPsec;
- (void)setShouldPairDirectlyOverIPsec:;
- (long long)pairingType;
- (void)setPairingType:;
+ (BOOL)supportsSecureCoding;
@end

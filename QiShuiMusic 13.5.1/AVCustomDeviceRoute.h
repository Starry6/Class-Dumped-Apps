@interface AVCustomDeviceRoute : NSObject
@property (nonatomic) DADevice device;
@property (nonatomic) NSObject<OS_nw_endpoint> networkEndpoint;
@property (nonatomic) NSUUID bluetoothIdentifier;
@property (nonatomic) BOOL active;
- (void)setDevice:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (void)setActive:;
- (BOOL)isEqual:;
- (id)device;
- (BOOL)isActive;
- (id)bluetoothIdentifier;
- (void)setBluetoothIdentifier:;
- (id)networkEndpoint;
- (void)setNetworkEndpoint:;
@end

@interface MCAirPlayDestination : NSObject
@property (nonatomic) NSString deviceID;
@property (nonatomic) NSString deviceName;
@property (nonatomic) NSString password;
- (void)setPassword:;
- (void)setDeviceName:;
- (id)password;
- (id)deviceName;
- (void)setDeviceID:;
- (id)deviceID;
- (void).cxx_destruct;
@end

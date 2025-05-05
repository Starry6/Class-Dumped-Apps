@interface CURangingPeer : NSObject
@property (nonatomic) NSData deviceAddress;
@property (nonatomic) NSData deviceIRK;
@property (nonatomic) NSString deviceModel;
- (id)deviceModel;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (void)setDeviceModel:;
- (BOOL)isEqual:;
- (id)deviceAddress;
- (void)setDeviceAddress:;
- (id)deviceIRK;
- (void)setDeviceIRK:;
@end

@interface CURangingSample : NSObject
@property (nonatomic) NSInteger channel;
@property (nonatomic) NSData deviceAddress;
@property (nonatomic) NSString deviceModel;
@property (nonatomic) NSInteger rawRSSI;
- (id)deviceModel;
- (void)setChannel:;
- (int)channel;
- (void).cxx_destruct;
- (id)description;
- (void)setDeviceModel:;
- (int)rawRSSI;
- (id)deviceAddress;
- (void)setDeviceAddress:;
- (void)setRawRSSI:;
@end

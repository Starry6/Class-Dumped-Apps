@interface MPSGraphDevice : NSObject
@property (nonatomic) NSString metalDeviceName;
@property (nonatomic) q gpuCoreCount;
@property (nonatomic) I type;
@property (nonatomic) <MTLDevice> metalDevice;
- (id)metalDevice;
- (unsigned int)type;
- (void).cxx_destruct;
- (id)initWithDeviceType:metalDevice:;
- (long long)gpuCoreCount;
- (id)metalDeviceName;
+ (id)deviceWithMTLDevice:;
+ (id)ANEDevice;
+ (id)CPUDevice;
@end

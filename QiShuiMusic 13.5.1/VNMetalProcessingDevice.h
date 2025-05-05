@interface VNMetalProcessingDevice : VNProcessingDevice
- (int)espressoDeviceID;
- (BOOL)targetsGPU;
- (id)initWithMetalDevice:;
- (unsigned long long)hash;
- (id)metalDevice;
- (void).cxx_destruct;
- (int)espressoStorageType;
- (id)description;
- (int)espressoEngine;
- (BOOL)isEqual:;
+ (id)allDevices;
@end

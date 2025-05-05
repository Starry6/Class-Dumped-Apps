@interface VNProcessingDevice : NSObject
- (int)espressoDeviceID;
- (BOOL)targetsGPU;
- (unsigned long long)hash;
- (id)metalDevice;
- (int)espressoStorageType;
- (id)description;
- (BOOL)targetsCPU;
- (int)espressoEngine;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)targetsANE;
+ (id)defaultANEDevice;
+ (void)forcedCleanup;
+ (id)allDevices;
+ (id)defaultMetalDevice;
+ (id)defaultDevice;
+ (void)_lockStaticObjectsAccessLock;
+ (void)_unlockStaticObjectsAccessLock;
+ (id)deviceForMetalDevice:;
+ (id)defaultCPUDevice;
+ (id)directANEDevice;
@end

@interface ShotflowNetworkANODv3 : ShotflowNetworkANODBase
- (id)processVImage:inputIsBGR:;
- (void)initializeBuffers;
- (int)setInputShape:height:;
- (id)initWithModelPath:espressoEngineID:espressoDeviceID:espressoStorageType:threshold:;
+ (id)modelName;
+ (id)importantClasses;
+ (float)inputScale;
+ (BOOL)hasPose;
+ (unsigned long long)mumberPosClasses;
+ (id)inputBiasRGB;
+ (id)inputLayerName;
+ (BOOL)inputBGR;
@end

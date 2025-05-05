@interface ShotflowNetworkANODBase : ShotflowNetwork
- (void)initializeBuffers;
- (id)initWithModelPath:espressoEngineID:espressoDeviceID:espressoStorageType:threshold:;
+ (id)inputImageSize;
+ (id)ratios;
+ (id)cellStartsX;
+ (unsigned long long)numberMaxoutLayers;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (BOOL)poseSquare;
+ (id)cellStartsY;
+ (float)nonSquareRollDefault;
+ (float)nonSquareYawDefault;
@end

@interface ShotflowNetworkANFDv1 : ShotflowNetwork
- (void)initializeBuffers;
- (int)setInputShape:height:;
- (id)initWithModelPath:espressoEngineID:espressoDeviceID:espressoStorageType:threshold:;
+ (id)modelName;
+ (id)importantClasses;
+ (id)inputImageSize;
+ (id)ratios;
+ (id)cellStartsX;
+ (unsigned long long)mumberPosClasses;
+ (unsigned long long)numberMaxoutLayers;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (BOOL)poseSquare;
+ (id)cellStartsY;
@end

@interface ShotflowNetworkANODv4 : ShotflowNetworkANODBase
- (id)processVImage:inputIsBGR:;
- (void)initializeBuffers;
- (int)setInputShape:height:;
+ (id)modelName;
+ (id)importantClasses;
+ (float)inputScale;
+ (BOOL)hasPose;
+ (unsigned long long)mumberPosClasses;
+ (id)inputBiasRGB;
+ (id)inputLayerName;
+ (BOOL)inputBGR;
@end

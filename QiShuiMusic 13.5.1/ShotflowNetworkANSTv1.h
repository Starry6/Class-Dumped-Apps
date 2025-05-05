@interface ShotflowNetworkANSTv1 : ShotflowNetworkANODBase
- (id)processVImage:inputIsBGR:;
- (void)initializeBuffers;
- (int)setInputShape:height:;
+ (id)modelName;
+ (id)importantClasses;
+ (id)inputImageSize;
+ (float)inputScale;
+ (BOOL)hasPose;
+ (unsigned long long)mumberPosClasses;
+ (id)inputBiasRGB;
+ (id)inputLayerName;
+ (BOOL)inputBGR;
@end

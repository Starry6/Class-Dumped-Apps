@interface SISceneUnderstanding : NSObject
@property (nonatomic) {_SITensorDim=[4Q]} labelTensorDimensions;
@property (nonatomic) {_SITensorDim=[4Q]} normalTensorDimensions;
@property (nonatomic) {_SITensorDim=[4Q]} probabilitiesTensorDimensions;
- (void)dealloc;
- (id)labelTensorDimensions;
- (id)normalTensorDimensions;
- (id)probabilitiesTensorDimensions;
- (id)initWithComputeEngine:;
- (BOOL)initMLNetworkWithComputeEngine:;
- (long long)evaluateImage:results:;
+ (id)inputResolution;
@end

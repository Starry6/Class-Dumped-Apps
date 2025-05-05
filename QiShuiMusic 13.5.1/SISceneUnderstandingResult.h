@interface SISceneUnderstandingResult : NSObject
@property (nonatomic) {CGSize=dd} resolution;
@property (nonatomic) {_SITensorDim=[4Q]} labelTensorDimensions;
@property (nonatomic) {_SITensorDim=[4Q]} normalTensorDimensions;
@property (nonatomic) {_SITensorDim=[4Q]} probabilitiesTensorDimensions;
- (void)dealloc;
- (id)initWithModel:;
- (id)resolution;
- (id)labelsTensor;
- (id)normalsTensor;
- (id)probabilitiesTensor;
- (long long)writeNormals:orientation:;
- (long long)writeProbabilities:;
- (long long)writeLabels:;
- (id)labelTensorDimensions;
- (id)normalTensorDimensions;
- (id)probabilitiesTensorDimensions;
+ (id)outputDimensions;
@end

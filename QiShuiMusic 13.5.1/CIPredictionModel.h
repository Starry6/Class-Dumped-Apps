@interface CIPredictionModel : NSObject
@property (nonatomic) MLModel model;
@property (nonatomic) {CIPredictionModelImageFeatures=@qqI} inputImageFeatures;
@property (nonatomic) {CIPredictionModelImageFeatures=@qqI} outputImageFeatures;
@property (nonatomic) NSSet featureNames;
- (id)model;
- (void)dealloc;
- (void)setModel:;
- (id)initWithModel:;
- (id)featureValueForName:;
- (id)featureNames;
- (BOOL)processInputModel:;
- (BOOL)processInputFeatureWithName:featureDescription:;
- (BOOL)processOutputFeatureWithName:featureDescription:;
- (id)predictUsingInputBuffer:outputBuffer:error:;
- (id)inputImageFeatures;
- (void)setInputImageFeatures:;
- (id)outputImageFeatures;
- (void)setOutputImageFeatures:;
@end

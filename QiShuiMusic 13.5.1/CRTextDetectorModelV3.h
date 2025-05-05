@interface CRTextDetectorModelV3 : NSObject
@property (nonatomic) MLModel model;
- (id)model;
- (id)init;
- (id)predictionFromFeatures:options:error:;
- (id)initWithConfiguration:error:;
- (void).cxx_destruct;
- (id)predictionFromFeatures:error:;
- (id)initWithContentsOfURL:error:;
- (id)initWithContentsOfURL:configuration:error:;
- (id)predictionsFromInputs:options:error:;
- (id)predictionFromImg_input:error:;
+ (id)defaultURLOfModelInThisBundle;
@end

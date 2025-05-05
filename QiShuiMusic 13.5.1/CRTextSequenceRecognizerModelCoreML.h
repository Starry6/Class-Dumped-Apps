@interface CRTextSequenceRecognizerModelCoreML : CRTextSequenceRecognizerModel
@property (nonatomic) MLModel model;
- (id)model;
- (id)init;
- (id)predictionFromFeatures:options:error:;
- (id)initWithConfiguration:error:;
- (id)configuration;
- (void).cxx_destruct;
- (id)predictionFromFeatures:error:;
- (id)initWithContentsOfURL:error:;
- (id)initWithContentsOfURL:configuration:error:;
- (id)predictionsFromInputs:options:error:;
- (id)initWithMLConfiguration:error:;
- (id)predictFromInputs:error:;
- (id)predictionFromImg_input:error:;
- (id)inputBatchFromTextFeatures:image:featureWidth:configuration:;
- (BOOL)shouldSaturateInputBatchesForConfiguration:;
@end

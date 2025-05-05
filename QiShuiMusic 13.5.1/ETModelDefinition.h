@interface ETModelDefinition : NSObject
@property (nonatomic) NSArray layerNames;
@property (nonatomic) NSArray inputs;
@property (nonatomic) NSArray outputs;
@property (nonatomic) NSArray trainingInputs;
@property (nonatomic) NSArray trainingOutputs;
@property (nonatomic) NSURL modelURL;
@property (nonatomic) NSString isTrainingGlobalName;
@property (nonatomic) NSString initializer;
- (id)inputs;
- (id)outputs;
- (id)modelURL;
- (void).cxx_destruct;
- (id)layerNames;
- (id)initWithInferenceNetworkPath:error:;
- (id)initWithInferenceNetworkPath:inferenceInputs:inferenceOutputs:error:;
- (id)initWithTrainingNetworkPath:inferenceInputs:inferenceOutputs:trainingInputs:trainingOutputs:trainingControlVariableName:withInitializer:error:;
- (id)trainingInputs;
- (id)trainingOutputs;
- (id)isTrainingGlobalName;
- (id)initializer;
@end

@interface BWStillImageConditionalRouterInferenceConfiguration : BWStillImageConditionalRouterConfiguration
@property (nonatomic) I defaultOutputIndex;
@property (nonatomic) I inferenceOuputIndex;
- (id)init;
- (unsigned int)defaultOutputIndex;
- (unsigned int)inferenceOuputIndex;
+ (id)inferenceConfiguration;
@end

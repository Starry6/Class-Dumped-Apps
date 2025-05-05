@interface BWLearnedNRInferenceConfiguration : BWTiledEspressoInferenceConfiguration
@property (nonatomic) NSDictionary sensorConfigurationsByPortType;
@property (nonatomic) NSString outputMediaKey;
- (void)dealloc;
- (id)sensorConfigurationsByPortType;
- (id)initWithMetalCommandQueue:sensorConfigurationsByPortType:inferenceType:;
- (id)outputMediaKey;
+ (id)outputMediaKeyForInferenceType:;
@end

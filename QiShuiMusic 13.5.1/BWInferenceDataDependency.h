@interface BWInferenceDataDependency : NSObject
@property (nonatomic) BWInferenceDataRequirement dataRequirement;
@property (nonatomic) BWInferenceRequirement inferenceRequirement;
- (void)dealloc;
- (id)dataRequirement;
- (id)initWithInferenceRequirement:dependentOnDataRequirement:;
- (id)inferenceRequirement;
@end

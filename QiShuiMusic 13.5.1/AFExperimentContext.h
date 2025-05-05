@interface AFExperimentContext : NSObject
@property (nonatomic) AFExperiment<AFExperimentForSiriVOXSounds> experimentForSiriVOXSounds;
@property (nonatomic) AFExperiment<AFExperimentForSiriVOXTapToSiriBehavior> experimentForSiriVOXTapToSiriBehavior;
@property (nonatomic) AFExperiment<AFInvocationFeedbackExperiment> invocationFeedbackExperiment;
@property (nonatomic) NSDictionary experimentsByConfigurationIdentifier;
- (id)init;
- (id)invocationFeedbackExperiment;
- (id)experimentForSiriVOXTapToSiriBehavior;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (id)initWithExperimentsByConfigurationIdentifier:;
- (void)encodeWithCoder:;
- (id)experimentsByConfigurationIdentifier;
- (id)experimentForSiriVOXSounds;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end

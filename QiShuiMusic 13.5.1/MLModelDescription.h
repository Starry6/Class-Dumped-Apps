@interface MLModelDescription : NSObject
@property (nonatomic) NSArray classLabels;
@property (nonatomic) NSURL modelURL;
@property (nonatomic) BOOL isUpdatable;
@property (nonatomic) NSDictionary trainingInputDescriptionsByName;
@property (nonatomic) NSDictionary parameterDescriptionsByKey;
@property (nonatomic) MLLayerPath modelPath;
@property (nonatomic) MLFeatureDescription predictedValueFeatureDescription;
@property (nonatomic) MLFeatureDescription predictedClassFeatureDescription;
@property (nonatomic) MLFeatureDescription classProbabilityFeatureDescription;
@property (nonatomic) NSOrderedSet inputFeatureNames;
@property (nonatomic) NSOrderedSet outputFeatureNames;
@property (nonatomic) NSDictionary inputDescriptionsByName;
@property (nonatomic) NSDictionary outputDescriptionsByName;
@property (nonatomic) NSString predictedFeatureName;
@property (nonatomic) NSString predictedProbabilitiesName;
@property (nonatomic) NSDictionary metadata;
- (id)debugQuickLookObject;
- (void)setClassLabels:;
- (void)setModelPath:;
- (id)initWithModelSpecification:error:;
- (void)setIsUpdatable:;
- (id)classLabels;
- (id)initWithInputDescriptions:outputDescriptions:predictedFeatureName:predictedProbabilitiesName:trainingInputDescriptions:orderedInputFeatureNames:orderedOutputFeatureNames:metadata:;
- (id)predictedClassFeatureDescription;
- (id)outputFeatureNames;
- (id)metadata;
- (BOOL)verifyInput:error:;
- (BOOL)validateAsClassifierDescriptionAndReturnError:;
- (id)outputDescriptionsByName;
- (id)initWithInputDescriptions:outputDescriptions:predictedFeatureName:predictedProbabilitiesName:trainingInputDescriptions:metadata:;
- (id)classProbabilityFeatureDescription;
- (id)initWithCoder:;
- (BOOL)isEqualToDescription:;
- (unsigned long long)hash;
- (BOOL)validateAsRegressorDescriptionAndReturnError:;
- (void)setParameterDescriptionsByKey:;
- (id)trainingInputDescriptionsByName;
- (BOOL)isUpdatable;
- (void)encodeWithCoder:;
- (id)predictedProbabilitiesName;
- (id)predictedFeatureName;
- (id)modelURL;
- (void)setModelURL:;
- (void).cxx_destruct;
- (id)initWithInputDescriptions:outputDescriptions:predictedFeatureName:predictedProbabilitiesName:metadata:;
- (id)predictedValueFeatureDescription;
- (id)description;
- (id)inputFeatureNames;
- (id)initWithModelDescriptionSpecification:error:;
- (id)modelPath;
- (id)parameterDescriptionsByKey;
- (BOOL)isEqual:;
- (id)inputDescriptionsByName;
- (void)setTrainingInputDescriptionsByName:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)metadataWithSpecification:;
+ (id)metadataWithFormat:;
@end

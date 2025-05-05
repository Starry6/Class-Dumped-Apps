@interface MLClassifierResult : NSObject
@property (nonatomic) MLFeatureValue predictedClass;
@property (nonatomic) NSDictionary classProbability;
@property (nonatomic) q predictedClassFeatureType;
@property (nonatomic) <MLFeatureProvider> additionalFeatures;
- (void).cxx_destruct;
- (id)asFeatureDictionaryWithPredictedClassDescription:classProbabilityDescription:;
- (id)additionalFeatures;
- (id)initWithStringClassProbability:classFeatureType:additionalFeatures:;
- (id)initWithIntClassProbability:classFeatureType:additionalFeatures:;
- (id)initWithClassProbability:additionalFeatures:classLabelOfMaxProbability:;
- (id)predictedClass;
- (id)classProbability;
- (long long)predictedClassFeatureType;
+ (id)resultWithStringClassProbability:;
+ (id)resultWithIntClassProbability:;
+ (id)resultWithStringClassProbability:additionalFeatures:;
+ (id)resultWithIntClassProbability:additionalFeatures:;
+ (id)resultWithClassProbability:additionalFeatures:classLabelOfMaxProbability:;
@end

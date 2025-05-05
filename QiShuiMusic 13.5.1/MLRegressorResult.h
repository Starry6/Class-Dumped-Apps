@interface MLRegressorResult : NSObject
@property (nonatomic) MLMultiArray predictedValue;
@property (nonatomic) <MLFeatureProvider> additionalFeatures;
- (void).cxx_destruct;
- (id)asFeatureDictionaryWithPredictedValueDescription:;
- (id)initWithValue:additionalFeatures:;
- (id)predictedValue;
- (id)additionalFeatures;
+ (id)resultWithValue:;
+ (id)resultWithValue:additionalFeatures:;
@end

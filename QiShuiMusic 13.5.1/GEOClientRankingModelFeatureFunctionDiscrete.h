@interface GEOClientRankingModelFeatureFunctionDiscrete : GEOClientRankingModelFeatureFunction
@property (nonatomic) float valueThresholdLow;
@property (nonatomic) float weightLow;
@property (nonatomic) float valueThresholdHigh;
@property (nonatomic) float weightHigh;
- (id)init;
- (long long)functionType;
- (id)initWithValueThresholdLow:weightLow:valueThresholdHigh:weightHigh:;
- (float)valueThresholdLow;
- (float)weightLow;
- (float)valueThresholdHigh;
- (float)weightHigh;
@end

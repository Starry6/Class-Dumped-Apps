@interface GEOClientRankingModelFeatureFunctionLinear : GEOClientRankingModelFeatureFunction
@property (nonatomic) float weight;
@property (nonatomic) float maxRelativeValue;
@property (nonatomic) float meanValue;
- (id)init;
- (float)weight;
- (long long)functionType;
- (id)initWithWeight:maxRelativeValue:meanValue:;
- (float)maxRelativeValue;
- (float)meanValue;
@end

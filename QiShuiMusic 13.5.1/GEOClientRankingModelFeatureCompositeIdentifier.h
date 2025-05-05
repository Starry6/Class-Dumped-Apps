@interface GEOClientRankingModelFeatureCompositeIdentifier : GEOClientRankingModelFeatureIdentifier
@property (nonatomic) NSArray unitExponentPairs;
@property (nonatomic) float featureWeight;
- (void).cxx_destruct;
- (long long)featureIdentifierType;
- (id)initWithUnitExponentPairs:featureWeight:;
- (id)unitExponentPairs;
- (void)setUnitExponentPairs:;
- (float)featureWeight;
@end

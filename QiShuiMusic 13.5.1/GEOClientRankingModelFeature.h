@interface GEOClientRankingModelFeature : NSObject
@property (nonatomic) GEOClientRankingModelFeatureIdentifier featureIdentifier;
@property (nonatomic) GEOClientRankingModelFeatureFunction function;
- (id)featureIdentifier;
- (id)init;
- (id)function;
- (void).cxx_destruct;
- (id)initWithFeatureIdentifier:function:;
- (id)initWithGEOPDClientRankingFeatureMetadata:;
@end

@interface GEOClientRankingFeatureUnit : NSObject
@property (nonatomic) q featureType;
@property (nonatomic) GEOClientRankingModelFeatureSourceIdentifier source;
@property (nonatomic) GEOClientRankingModelFeatureTypeIdentifier feature;
@property (nonatomic) GEOClientRankingModelFeatureFunction function;
- (long long)featureType;
- (id)feature;
- (id)function;
- (void).cxx_destruct;
- (id)source;
- (id)initWithSource:function:;
- (id)initWithFeatureType:function:;
@end

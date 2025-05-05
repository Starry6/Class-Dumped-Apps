@interface GRRSchemaGRRHypothesisRankingStarted : SISchemaInstrumentationMessage
@property (nonatomic) NSString assetVersion;
@property (nonatomic) BOOL hasAssetVersion;
@property (nonatomic) NSArray featureFlags;
@property (nonatomic) NSData jsonData;
- (void)setFeatureFlags:;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setAssetVersion:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (id)featureFlags;
- (BOOL)readFrom:;
- (id)assetVersion;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasAssetVersion;
- (void)deleteAssetVersion;
- (void)clearFeatureFlags;
- (void)deleteFeatureFlags;
- (void)addFeatureFlags:;
- (unsigned long long)featureFlagsCount;
- (id)featureFlagsAtIndex:;
- (void)setHasAssetVersion:;
@end

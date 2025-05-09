@interface GRRSchemaGRRFeatureExtracted : SISchemaInstrumentationMessage
@property (nonatomic) GRRSchemaGRRSource source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) NSArray featureNames;
@property (nonatomic) NSArray features;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setFeatures:;
- (void)setHasSource:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)featureNames;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (id)source;
- (BOOL)readFrom:;
- (id)features;
- (BOOL)hasSource;
- (id)dictionaryRepresentation;
- (void)setSource:;
- (BOOL)isEqual:;
- (void)clearFeatures;
- (unsigned long long)featuresCount;
- (id)featuresAtIndex:;
- (void)deleteSource;
- (void)clearFeatureNames;
- (void)deleteFeatureNames;
- (void)addFeatureNames:;
- (unsigned long long)featureNamesCount;
- (id)featureNamesAtIndex:;
- (void)deleteFeatures;
- (void)addFeatures:;
- (void)setFeatureNames:;
@end

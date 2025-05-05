@interface CAMSchemaCAMRequestReceived : SISchemaInstrumentationMessage
@property (nonatomic) NSArray features;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setFeatures:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)features;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)addFeature:;
- (id)featureAtIndex:;
- (void)deleteFeature;
- (void)clearFeature;
- (unsigned long long)featureCount;
@end

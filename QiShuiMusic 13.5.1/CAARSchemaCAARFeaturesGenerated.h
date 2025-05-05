@interface CAARSchemaCAARFeaturesGenerated : SISchemaInstrumentationMessage
@property (nonatomic) NSArray actionFeatureSets;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)clearActionFeatureSets;
- (void)deleteActionFeatureSets;
- (void)addActionFeatureSets:;
- (unsigned long long)actionFeatureSetsCount;
- (id)actionFeatureSetsAtIndex:;
- (id)actionFeatureSets;
- (void)setActionFeatureSets:;
@end

@interface FLOWSchemaFLOWMapsExecutionTier1 : SISchemaInstrumentationMessage
@property (nonatomic) NSArray mapsEntities;
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
- (void)clearMapsEntities;
- (void)deleteMapsEntities;
- (void)addMapsEntities:;
- (unsigned long long)mapsEntitiesCount;
- (id)mapsEntitiesAtIndex:;
- (id)mapsEntities;
- (void)setMapsEntities:;
@end

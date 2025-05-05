@interface HOMESchemaHOMEClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID homeComponentId;
@property (nonatomic) BOOL hasHomeComponentId;
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
- (BOOL)hasHomeComponentId;
- (void)deleteHomeComponentId;
- (id)homeComponentId;
- (void)setHomeComponentId:;
- (void)setHasHomeComponentId:;
@end

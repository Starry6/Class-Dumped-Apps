@interface GRRSchemaGRRSource : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID sourceId;
@property (nonatomic) BOOL hasSourceId;
@property (nonatomic) NSInteger sourceType;
@property (nonatomic) BOOL hasSourceType;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (int)sourceType;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setSourceType:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)hasSourceId;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (void)setSourceId:;
- (id)sourceId;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasSourceType;
- (void)setHasSourceType:;
- (void)deleteSourceId;
- (void)deleteSourceType;
- (void)setHasSourceId:;
@end

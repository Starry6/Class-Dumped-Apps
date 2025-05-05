@interface DUSchemaDUContent : SISchemaInstrumentationMessage
@property (nonatomic) NSData dataPayload;
@property (nonatomic) BOOL hasDataPayload;
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
- (void)setDataPayload:;
- (BOOL)hasDataPayload;
- (void)deleteDataPayload;
- (id)dataPayload;
- (void)setHasDataPayload:;
@end

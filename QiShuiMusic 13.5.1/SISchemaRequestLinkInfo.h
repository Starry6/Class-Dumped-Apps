@interface SISchemaRequestLinkInfo : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger component;
@property (nonatomic) BOOL hasComponent;
@property (nonatomic) SISchemaUUID uuid;
@property (nonatomic) BOOL hasUuid;
@property (nonatomic) NSData jsonData;
- (BOOL)hasUuid;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)uuid;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setUuid:;
- (int)component;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setComponent:;
- (BOOL)hasComponent;
- (void)setHasComponent:;
- (void)deleteComponent;
- (void)deleteUuid;
- (void)setHasUuid:;
@end

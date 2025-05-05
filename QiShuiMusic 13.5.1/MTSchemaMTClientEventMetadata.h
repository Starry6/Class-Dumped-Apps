@interface MTSchemaMTClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID mtId;
@property (nonatomic) BOOL hasMtId;
@property (nonatomic) SISchemaUUID sessionId;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) NSData jsonData;
- (void)setSessionId:;
- (void)setHasSessionId:;
- (id)sessionId;
- (BOOL)hasSessionId;
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
- (void)deleteSessionId;
- (BOOL)hasMtId;
- (void)deleteMtId;
- (id)mtId;
- (void)setMtId:;
- (void)setHasMtId:;
@end

@interface DUSchemaDUSearchSessionRecord : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID sessionId;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) Q sessionStartTimestampMs;
@property (nonatomic) BOOL hasSessionStartTimestampMs;
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
- (void)setSessionStartTimestampMs:;
- (BOOL)hasSessionStartTimestampMs;
- (void)setHasSessionStartTimestampMs:;
- (void)deleteSessionStartTimestampMs;
- (unsigned long long)sessionStartTimestampMs;
@end

@interface HOMESchemaHOMEAssistantInfoReported : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID hashedHomeId;
@property (nonatomic) BOOL hasHashedHomeId;
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
- (BOOL)hasHashedHomeId;
- (void)deleteHashedHomeId;
- (id)hashedHomeId;
- (void)setHashedHomeId:;
- (void)setHasHashedHomeId:;
@end

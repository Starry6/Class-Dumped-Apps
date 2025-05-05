@interface USPSchemaUSPLoggingInitalized : SISchemaInstrumentationMessage
@property (nonatomic) NSArray sessionInfoItems;
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
- (void)clearSessionInfoItems;
- (void)deleteSessionInfoItems;
- (void)addSessionInfoItems:;
- (unsigned long long)sessionInfoItemsCount;
- (id)sessionInfoItemsAtIndex:;
- (id)sessionInfoItems;
- (void)setSessionInfoItems:;
@end

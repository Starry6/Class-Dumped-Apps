@interface LCServiceBlacklistedFields : SISchemaInstrumentationMessage
@property (nonatomic) NSArray blackListedFields;
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
- (void)clearBlackListedFields;
- (void)deleteBlackListedFields;
- (void)addBlackListedFields:;
- (unsigned long long)blackListedFieldsCount;
- (id)blackListedFieldsAtIndex:;
- (id)blackListedFields;
- (void)setBlackListedFields:;
@end

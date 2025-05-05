@interface MTSchemaMTLocalePairResolved : SISchemaInstrumentationMessage
@property (nonatomic) MTSchemaMTLocalePair localePair;
@property (nonatomic) BOOL hasLocalePair;
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
- (void)setLocalePair:;
- (BOOL)hasLocalePair;
- (void)deleteLocalePair;
- (id)localePair;
- (void)setHasLocalePair:;
@end

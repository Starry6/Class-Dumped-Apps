@interface SISchemaGridCardSection : SISchemaInstrumentationMessage
@property (nonatomic) NSArray resultIdentifiers;
@property (nonatomic) NSInteger cardSource;
@property (nonatomic) BOOL hasCardSource;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)clearResultIdentifiers;
- (void)deleteResultIdentifiers;
- (void)addResultIdentifiers:;
- (unsigned long long)resultIdentifiersCount;
- (id)resultIdentifiersAtIndex:;
- (void)setCardSource:;
- (BOOL)hasCardSource;
- (void)setHasCardSource:;
- (void)deleteCardSource;
- (id)resultIdentifiers;
- (void)setResultIdentifiers:;
- (int)cardSource;
@end

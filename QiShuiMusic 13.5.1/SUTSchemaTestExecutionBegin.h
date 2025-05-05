@interface SUTSchemaTestExecutionBegin : SISchemaInstrumentationMessage
@property (nonatomic) SUTSchemaTestContext context;
@property (nonatomic) BOOL hasContext;
@property (nonatomic) BOOL shouldPersistData;
@property (nonatomic) BOOL hasShouldPersistData;
@property (nonatomic) NSData jsonData;
- (BOOL)hasContext;
- (id)initWithJSON:;
- (id)context;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)deleteContext;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (void)setHasContext:;
- (id)dictionaryRepresentation;
- (void)setContext:;
- (BOOL)isEqual:;
- (void)setShouldPersistData:;
- (BOOL)hasShouldPersistData;
- (void)setHasShouldPersistData:;
- (void)deleteShouldPersistData;
- (BOOL)shouldPersistData;
@end

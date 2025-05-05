@interface PETSchemaPET1Key : SISchemaInstrumentationMessage
@property (nonatomic) NSString key;
@property (nonatomic) BOOL hasKey;
@property (nonatomic) NSData jsonData;
- (void)setHasKey:;
- (BOOL)hasKey;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (id)key;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setKey:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteKey;
@end

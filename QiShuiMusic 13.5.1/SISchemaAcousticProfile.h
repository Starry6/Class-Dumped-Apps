@interface SISchemaAcousticProfile : SISchemaInstrumentationMessage
@property (nonatomic) NSData a;
@property (nonatomic) BOOL hasA;
@property (nonatomic) NSData jsonData;
- (id)a;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (void)setA:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasA:;
- (BOOL)hasA;
- (void)deleteA;
@end

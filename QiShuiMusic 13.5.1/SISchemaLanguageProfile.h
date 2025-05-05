@interface SISchemaLanguageProfile : SISchemaInstrumentationMessage
@property (nonatomic) NSData l;
@property (nonatomic) BOOL hasL;
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
- (void)deleteL;
- (id)l;
- (void)setL:;
- (BOOL)hasL;
- (void)setHasL:;
@end

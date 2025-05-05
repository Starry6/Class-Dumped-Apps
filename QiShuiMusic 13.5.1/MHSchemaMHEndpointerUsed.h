@interface MHSchemaMHEndpointerUsed : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger endpointer;
@property (nonatomic) BOOL hasEndpointer;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setEndpointer:;
- (BOOL)hasEndpointer;
- (void)setHasEndpointer:;
- (void)deleteEndpointer;
- (int)endpointer;
@end

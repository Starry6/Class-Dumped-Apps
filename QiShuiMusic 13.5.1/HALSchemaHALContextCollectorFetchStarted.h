@interface HALSchemaHALContextCollectorFetchStarted : SISchemaInstrumentationMessage
@property (nonatomic) BOOL isContextCollectorLocal;
@property (nonatomic) BOOL hasIsContextCollectorLocal;
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
- (void)setIsContextCollectorLocal:;
- (BOOL)hasIsContextCollectorLocal;
- (void)setHasIsContextCollectorLocal:;
- (void)deleteIsContextCollectorLocal;
- (BOOL)isContextCollectorLocal;
@end

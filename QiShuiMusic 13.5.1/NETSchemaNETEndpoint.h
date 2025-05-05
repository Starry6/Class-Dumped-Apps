@interface NETSchemaNETEndpoint : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) I port;
@property (nonatomic) BOOL hasPort;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)setType:;
- (void)writeTo:;
- (unsigned int)port;
- (void)setHasType:;
- (void)setPort:;
- (BOOL)hasType;
- (id)jsonData;
- (unsigned long long)hash;
- (void)deleteType;
- (int)type;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasPort;
- (void)setHasPort:;
- (void)deletePort;
@end

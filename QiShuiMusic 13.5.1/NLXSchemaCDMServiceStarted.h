@interface NLXSchemaCDMServiceStarted : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger serviceName;
@property (nonatomic) BOOL hasServiceName;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)setServiceName:;
- (void)writeTo:;
- (int)serviceName;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)hasServiceName;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasServiceName:;
- (void)deleteServiceName;
@end

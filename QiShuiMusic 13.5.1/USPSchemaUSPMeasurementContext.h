@interface USPSchemaUSPMeasurementContext : SISchemaInstrumentationMessage
@property (nonatomic) NSString contextName;
@property (nonatomic) BOOL hasContextName;
@property (nonatomic) NSInteger environment;
@property (nonatomic) BOOL hasEnvironment;
@property (nonatomic) NSData jsonData;
- (void)setEnvironment:;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (BOOL)hasEnvironment;
- (unsigned long long)hash;
- (int)environment;
- (void)deleteEnvironment;
- (void).cxx_destruct;
- (id)contextName;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasEnvironment:;
- (void)setContextName:;
- (BOOL)hasContextName;
- (void)deleteContextName;
- (void)setHasContextName:;
@end

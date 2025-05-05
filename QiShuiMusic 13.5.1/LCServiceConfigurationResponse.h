@interface LCServiceConfigurationResponse : SISchemaInstrumentationMessage
@property (nonatomic) LCServiceLoggingConfiguration configuration;
@property (nonatomic) BOOL hasConfiguration;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q whichResponse;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setConfiguration:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)configuration;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)hasConfiguration;
- (BOOL)isEqual:;
- (void)deleteConfiguration;
- (unsigned long long)whichResponse;
- (void)setHasConfiguration:;
@end

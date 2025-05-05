@interface INFERENCESchemaINFERENCEResolverConfig : SISchemaInstrumentationMessage
@property (nonatomic) INFERENCESchemaINFERENCEContactResolverConfig contactConfig;
@property (nonatomic) BOOL hasContactConfig;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q whichConfigurationtype;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setContactConfig:;
- (id)contactConfig;
- (void)deleteContactConfig;
- (unsigned long long)whichConfigurationtype;
- (BOOL)hasContactConfig;
- (void)setHasContactConfig:;
@end

@interface NETSchemaNETProxyConfiguration : SISchemaInstrumentationMessage
@property (nonatomic) BOOL isProxyConfigured;
@property (nonatomic) BOOL hasIsProxyConfigured;
@property (nonatomic) BOOL usingConfiguredProxy;
@property (nonatomic) BOOL hasUsingConfiguredProxy;
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
- (void)setIsProxyConfigured:;
- (BOOL)hasIsProxyConfigured;
- (void)setHasIsProxyConfigured:;
- (void)deleteIsProxyConfigured;
- (void)setUsingConfiguredProxy:;
- (BOOL)hasUsingConfiguredProxy;
- (void)setHasUsingConfiguredProxy:;
- (void)deleteUsingConfiguredProxy;
- (BOOL)isProxyConfigured;
- (BOOL)usingConfiguredProxy;
@end

@interface SADSchemaSADAvailableAssetDailyStatus : SISchemaInstrumentationMessage
@property (nonatomic) NSArray namespaceStatus;
@property (nonatomic) NSData jsonData;
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
- (void)clearNamespaceStatus;
- (void)deleteNamespaceStatus;
- (void)addNamespaceStatus:;
- (unsigned long long)namespaceStatusCount;
- (id)namespaceStatusAtIndex:;
- (id)namespaceStatus;
- (void)setNamespaceStatus:;
@end

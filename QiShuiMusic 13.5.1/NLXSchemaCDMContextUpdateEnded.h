@interface NLXSchemaCDMContextUpdateEnded : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID contextId;
@property (nonatomic) BOOL hasContextId;
@property (nonatomic) NSArray reformedTurnInputBundles;
@property (nonatomic) NSData jsonData;
- (void)setContextId:;
- (id)contextId;
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
- (BOOL)hasContextId;
- (void)deleteContextId;
- (void)setHasContextId:;
- (void)clearReformedTurnInputBundles;
- (void)deleteReformedTurnInputBundles;
- (void)addReformedTurnInputBundles:;
- (unsigned long long)reformedTurnInputBundlesCount;
- (id)reformedTurnInputBundlesAtIndex:;
- (id)reformedTurnInputBundles;
- (void)setReformedTurnInputBundles:;
@end

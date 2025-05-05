@interface SMTSchemaSMTAppLanguageModelProfileRebuildStarted : SISchemaInstrumentationMessage
@property (nonatomic) NSString appBundleId;
@property (nonatomic) BOOL hasAppBundleId;
@property (nonatomic) NSData jsonData;
- (void)setAppBundleId:;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)appBundleId;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)hasAppBundleId;
- (BOOL)isEqual:;
- (void)deleteAppBundleId;
- (void)setHasAppBundleId:;
@end

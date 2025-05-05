@interface SMTSchemaSMTAppLanguageModelBuildFailed : SISchemaInstrumentationMessage
@property (nonatomic) NSString assetName;
@property (nonatomic) BOOL hasAssetName;
@property (nonatomic) NSInteger reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setAssetName:;
- (int)reason;
- (id)assetName;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setReason:;
- (BOOL)hasReason;
- (void)setHasReason:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteReason;
- (BOOL)hasAssetName;
- (void)deleteAssetName;
- (void)setHasAssetName:;
@end

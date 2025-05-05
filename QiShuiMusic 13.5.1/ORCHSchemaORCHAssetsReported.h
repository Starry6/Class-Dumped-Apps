@interface ORCHSchemaORCHAssetsReported : SISchemaInstrumentationMessage
@property (nonatomic) NSArray assets;
@property (nonatomic) NSData jsonData;
- (id)assets;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)clearAssets;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setAssets:;
- (unsigned long long)assetsCount;
- (id)assetsAtIndex:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (void)addAssets:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteAssets;
@end

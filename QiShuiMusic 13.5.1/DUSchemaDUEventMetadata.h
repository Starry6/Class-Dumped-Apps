@interface DUSchemaDUEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID assetIdentifier;
@property (nonatomic) BOOL hasAssetIdentifier;
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
- (id)assetIdentifier;
- (void)setAssetIdentifier:;
- (BOOL)hasAssetIdentifier;
- (void)deleteAssetIdentifier;
- (void)setHasAssetIdentifier:;
@end

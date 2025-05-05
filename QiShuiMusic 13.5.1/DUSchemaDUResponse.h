@interface DUSchemaDUResponse : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) SISchemaUUID assetIdentifier;
@property (nonatomic) BOOL hasAssetIdentifier;
@property (nonatomic) NSData jsonData;
- (void)setStatus:;
- (BOOL)hasStatus;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setHasStatus:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (int)status;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)assetIdentifier;
- (void)setAssetIdentifier:;
- (void)deleteStatus;
- (BOOL)hasAssetIdentifier;
- (void)deleteAssetIdentifier;
- (void)setHasAssetIdentifier:;
@end

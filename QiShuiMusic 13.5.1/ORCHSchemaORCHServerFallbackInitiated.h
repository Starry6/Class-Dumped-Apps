@interface ORCHSchemaORCHServerFallbackInitiated : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger fallbackReason;
@property (nonatomic) BOOL hasFallbackReason;
@property (nonatomic) NSArray missingAssets;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (int)fallbackReason;
- (void)setFallbackReason:;
- (BOOL)hasFallbackReason;
- (void)setHasFallbackReason:;
- (void)deleteFallbackReason;
- (void)clearMissingAsset;
- (void)deleteMissingAsset;
- (void)addMissingAsset:;
- (unsigned long long)missingAssetCount;
- (int)missingAssetAtIndex:;
- (id)missingAssets;
- (void)setMissingAssets:;
@end

@interface GEOLogMsgStateMuninResource : PBCodable
@property (nonatomic) BOOL hasAssetBucket;
@property (nonatomic) NSString assetBucket;
@property (nonatomic) BOOL hasLevelOfDetail;
@property (nonatomic) I levelOfDetail;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setHasLevelOfDetail:;
- (unsigned long long)hash;
- (void)copyTo:;
- (id)assetBucket;
- (void)mergeFrom:;
- (BOOL)hasAssetBucket;
- (unsigned int)levelOfDetail;
- (void).cxx_destruct;
- (void)setAssetBucket:;
- (BOOL)readFrom:;
- (id)description;
- (void)setLevelOfDetail:;
- (id)dictionaryRepresentation;
- (BOOL)hasLevelOfDetail;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end

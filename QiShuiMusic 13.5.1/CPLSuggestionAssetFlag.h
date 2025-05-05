@interface CPLSuggestionAssetFlag : PBCodable
@property (nonatomic) BOOL hasIsRepresentative;
@property (nonatomic) BOOL isRepresentative;
@property (nonatomic) BOOL hasIsKeyAsset;
@property (nonatomic) BOOL isKeyAsset;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setIsKeyAsset:;
- (void)setIsRepresentative:;
- (BOOL)isKeyAsset;
- (BOOL)isRepresentative;
- (void)setHasIsRepresentative:;
- (BOOL)hasIsRepresentative;
- (void)setHasIsKeyAsset:;
- (BOOL)hasIsKeyAsset;
@end

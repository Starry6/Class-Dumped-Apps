@interface VCPProtoLivePhotoKeyFrameStillResult : PBCodable
@property (nonatomic) float sharpness;
@property (nonatomic) float textureness;
@property (nonatomic) BOOL hasFlash;
@property (nonatomic) float stillTime;
- (void)writeTo:;
- (float)sharpness;
- (BOOL)hasFlash;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setSharpness:;
- (id)exportToLegacyDictionary;
- (float)textureness;
- (void)setTextureness:;
- (void)setHasFlash:;
- (float)stillTime;
- (void)setStillTime:;
+ (id)resultFromLegacyDictionary:;
@end

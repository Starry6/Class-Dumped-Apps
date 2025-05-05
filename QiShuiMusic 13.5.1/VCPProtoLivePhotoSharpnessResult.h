@interface VCPProtoLivePhotoSharpnessResult : PBCodable
@property (nonatomic) float sharpness;
- (void)writeTo:;
- (float)sharpness;
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
+ (id)resultFromLegacyDictionary:;
@end

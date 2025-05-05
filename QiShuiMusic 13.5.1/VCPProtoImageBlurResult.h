@interface VCPProtoImageBlurResult : PBCodable
@property (nonatomic) float sharpness;
@property (nonatomic) BOOL hasFaceSharpness;
@property (nonatomic) float faceSharpness;
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
- (void)setFaceSharpness:;
- (void)setHasFaceSharpness:;
- (BOOL)hasFaceSharpness;
- (float)faceSharpness;
+ (id)resultFromLegacyDictionary:;
@end

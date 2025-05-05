@interface VCPProtoImageCompositionResult : PBCodable
@property (nonatomic) float confidence;
@property (nonatomic) VCPProtoPoint vanishingPoint;
@property (nonatomic) VCPProtoLine dominantLine;
- (float)confidence;
- (void)setConfidence:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)exportToLegacyDictionary;
- (id)vanishingPoint;
- (void)setVanishingPoint:;
- (id)dominantLine;
- (void)setDominantLine:;
+ (id)resultFromLegacyDictionary:;
@end

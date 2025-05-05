@interface VCPProtoImageExposureResult : PBCodable
@property (nonatomic) float exposure;
@property (nonatomic) BOOL hasUnderExpose;
@property (nonatomic) float underExpose;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (float)exposure;
- (void)setExposure:;
- (id)exportToLegacyDictionary;
- (void)setUnderExpose:;
- (void)setHasUnderExpose:;
- (BOOL)hasUnderExpose;
- (float)underExpose;
+ (id)resultFromLegacyDictionary:;
@end

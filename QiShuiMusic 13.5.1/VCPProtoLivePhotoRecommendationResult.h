@interface VCPProtoLivePhotoRecommendationResult : PBCodable
@property (nonatomic) VCPProtoTimeRange timeRange;
@property (nonatomic) float qualityScore;
- (id)timeRange;
- (float)qualityScore;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)setTimeRange:;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setQualityScore:;
- (id)exportToLegacyDictionary;
+ (id)resultFromLegacyDictionary:;
@end

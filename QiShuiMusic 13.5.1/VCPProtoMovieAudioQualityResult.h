@interface VCPProtoMovieAudioQualityResult : PBCodable
@property (nonatomic) VCPProtoTimeRange timeRange;
@property (nonatomic) float confidence;
- (float)confidence;
- (id)timeRange;
- (void)setConfidence:;
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
- (id)exportToLegacyDictionary;
+ (id)resultFromLegacyDictionary:;
@end

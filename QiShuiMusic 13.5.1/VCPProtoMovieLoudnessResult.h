@interface VCPProtoMovieLoudnessResult : PBCodable
@property (nonatomic) VCPProtoTimeRange timeRange;
@property (nonatomic) double energy;
@property (nonatomic) double peak;
- (id)timeRange;
- (void)writeTo:;
- (unsigned long long)hash;
- (double)energy;
- (void)setTimeRange:;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setEnergy:;
- (id)exportToLegacyDictionary;
- (double)peak;
- (void)setPeak:;
+ (id)resultFromLegacyDictionary:;
@end

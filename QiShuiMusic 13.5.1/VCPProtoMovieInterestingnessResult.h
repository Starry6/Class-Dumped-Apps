@interface VCPProtoMovieInterestingnessResult : PBCodable
@property (nonatomic) VCPProtoTimeRange timeRange;
@property (nonatomic) float interestScore;
- (id)timeRange;
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
- (float)interestScore;
- (void)setInterestScore:;
+ (id)resultFromLegacyDictionary:;
@end

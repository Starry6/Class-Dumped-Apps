@interface VCPProtoMovieFineSubjectMotionResult : PBCodable
@property (nonatomic) VCPProtoTimeRange timeRange;
@property (nonatomic) float actionScore;
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
- (float)actionScore;
- (void)setActionScore:;
- (id)exportToLegacyDictionary;
+ (id)resultFromLegacyDictionary:;
@end

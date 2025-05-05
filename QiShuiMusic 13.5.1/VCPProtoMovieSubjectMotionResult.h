@interface VCPProtoMovieSubjectMotionResult : PBCodable
@property (nonatomic) VCPProtoTimeRange timeRange;
@property (nonatomic) BOOL hasAction;
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
- (BOOL)hasAction;
- (void)setHasAction:;
- (id)exportToLegacyDictionary;
+ (id)resultFromLegacyDictionary:;
@end

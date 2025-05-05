@interface VCPProtoMovieOrientationResult : PBCodable
@property (nonatomic) VCPProtoTimeRange timeRange;
@property (nonatomic) NSInteger orientation;
- (id)timeRange;
- (void)writeTo:;
- (int)orientation;
- (unsigned long long)hash;
- (void)setTimeRange:;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setOrientation:;
- (id)copyWithZone:;
- (id)exportToLegacyDictionary;
+ (id)resultFromLegacyDictionary:;
@end

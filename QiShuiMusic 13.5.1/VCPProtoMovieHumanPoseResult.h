@interface VCPProtoMovieHumanPoseResult : PBCodable
@property (nonatomic) VCPProtoTimeRange timeRange;
@property (nonatomic) float confidence;
@property (nonatomic) VCPProtoBounds bounds;
@property (nonatomic) NSInteger flags;
- (float)confidence;
- (id)timeRange;
- (void)setConfidence:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)setTimeRange:;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setBounds:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (void)setFlags:;
- (id)dictionaryRepresentation;
- (id)bounds;
- (int)flags;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)exportToLegacyDictionary;
+ (id)resultFromLegacyDictionary:;
@end

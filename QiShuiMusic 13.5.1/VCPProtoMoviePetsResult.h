@interface VCPProtoMoviePetsResult : PBCodable
@property (nonatomic) VCPProtoTimeRange timeRange;
@property (nonatomic) VCPProtoBounds bounds;
@property (nonatomic) float confidence;
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
- (id)dictionaryRepresentation;
- (id)bounds;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)exportToLegacyDictionary;
+ (id)resultFromLegacyDictionary:;
@end

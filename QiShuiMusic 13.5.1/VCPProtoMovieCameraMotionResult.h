@interface VCPProtoMovieCameraMotionResult : PBCodable
@property (nonatomic) VCPProtoTimeRange timeRange;
@property (nonatomic) NSInteger motionType;
@property (nonatomic) BOOL isFast;
- (id)timeRange;
- (void)writeTo:;
- (void)setMotionType:;
- (unsigned long long)hash;
- (void)setTimeRange:;
- (void)copyTo:;
- (void)mergeFrom:;
- (int)motionType;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)exportToLegacyDictionary;
- (BOOL)isFast;
- (void)setIsFast:;
+ (id)resultFromLegacyDictionary:;
@end

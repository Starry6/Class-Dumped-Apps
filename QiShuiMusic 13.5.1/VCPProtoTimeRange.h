@interface VCPProtoTimeRange : PBCodable
@property (nonatomic) VCPProtoTime start;
@property (nonatomic) VCPProtoTime duration;
- (void)setStart:;
- (id)start;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setDuration:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)duration;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)timeRangeValue;
+ (id)timeRangeWithCMTimeRange:;
@end

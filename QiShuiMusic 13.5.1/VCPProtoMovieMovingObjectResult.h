@interface VCPProtoMovieMovingObjectResult : PBCodable
@property (nonatomic) VCPProtoTimeRange timeRange;
@property (nonatomic) NSMutableArray bounds;
- (id)timeRange;
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
- (void)clearBounds;
- (void)addBounds:;
- (unsigned long long)boundsCount;
- (id)boundsAtIndex:;
+ (id)resultFromLegacyDictionary:;
+ (Class)boundsType;
@end

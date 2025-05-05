@interface VCPProtoMovieClassificationResult : PBCodable
@property (nonatomic) VCPProtoTimeRange timeRange;
@property (nonatomic) NSMutableArray classifications;
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
- (void)addClassification:;
- (id)exportToLegacyDictionary;
- (void)clearClassifications;
- (unsigned long long)classificationsCount;
- (id)classificationAtIndex:;
- (id)classifications;
- (void)setClassifications:;
+ (Class)classificationType;
+ (id)resultFromLegacyDictionary:;
@end

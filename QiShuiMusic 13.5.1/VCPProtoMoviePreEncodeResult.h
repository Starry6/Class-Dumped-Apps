@interface VCPProtoMoviePreEncodeResult : PBCodable
@property (nonatomic) NSData statisticsBlob;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)exportToLegacyDictionary;
- (id)statisticsBlob;
- (void)setStatisticsBlob:;
+ (id)resultFromLegacyDictionary:;
@end

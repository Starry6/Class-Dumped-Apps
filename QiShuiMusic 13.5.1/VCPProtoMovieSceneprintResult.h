@interface VCPProtoMovieSceneprintResult : PBCodable
@property (nonatomic) VCPProtoTime timestamp;
@property (nonatomic) NSData sceneprintBlob;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)exportToLegacyDictionary;
- (id)sceneprintBlob;
- (void)setSceneprintBlob:;
+ (id)resultFromLegacyDictionary:;
@end

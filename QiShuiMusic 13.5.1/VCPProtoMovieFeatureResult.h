@interface VCPProtoMovieFeatureResult : PBCodable
@property (nonatomic) VCPProtoTime timestamp;
@property (nonatomic) NSData featureBlob;
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
- (id)featureBlob;
- (void)setFeatureBlob:;
+ (id)resultFromLegacyDictionary:;
@end

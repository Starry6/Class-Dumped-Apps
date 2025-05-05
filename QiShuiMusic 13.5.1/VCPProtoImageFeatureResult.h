@interface VCPProtoImageFeatureResult : PBCodable
@property (nonatomic) NSData featureBlob;
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
- (id)featureBlob;
- (void)setFeatureBlob:;
+ (id)resultFromLegacyDictionary:;
@end

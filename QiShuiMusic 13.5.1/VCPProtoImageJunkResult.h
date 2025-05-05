@interface VCPProtoImageJunkResult : PBCodable
@property (nonatomic) float confidence;
- (float)confidence;
- (void)setConfidence:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)exportToLegacyDictionary;
+ (id)resultFromLegacyDictionary:;
@end

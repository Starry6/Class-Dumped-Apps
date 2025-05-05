@interface VCPProtoImageSaliencyResult : PBCodable
@property (nonatomic) float confidence;
@property (nonatomic) VCPProtoBounds bounds;
- (float)confidence;
- (void)setConfidence:;
- (void)writeTo:;
- (unsigned long long)hash;
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

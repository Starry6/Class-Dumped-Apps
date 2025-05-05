@interface VCPProtoClassification : PBCodable
@property (nonatomic) I identifier;
@property (nonatomic) float confidence;
- (float)confidence;
- (void)setConfidence:;
- (unsigned int)identifier;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end

@interface VCPProtoKeypoint : PBCodable
@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float confidence;
- (float)confidence;
- (void)setConfidence:;
- (void)setX:;
- (void)setY:;
- (float)y;
- (void)writeTo:;
- (unsigned long long)hash;
- (float)x;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end

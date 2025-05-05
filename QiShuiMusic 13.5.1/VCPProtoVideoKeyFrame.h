@interface VCPProtoVideoKeyFrame : PBCodable
@property (nonatomic) VCPProtoTime timestamp;
@property (nonatomic) float curationScore;
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
- (void)setCurationScore:;
- (float)curationScore;
@end

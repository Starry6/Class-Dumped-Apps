@interface VCPProtoLine : PBCodable
@property (nonatomic) VCPProtoPoint start;
@property (nonatomic) VCPProtoPoint end;
- (void)setEnd:;
- (void)setStart:;
- (id)end;
- (id)start;
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
- (id)startPointValue;
- (id)endPointValue;
+ (id)lineFromPoint:toPoint:;
@end

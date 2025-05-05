@interface VCPProtoPoint : PBCodable
@property (nonatomic) double x;
@property (nonatomic) double y;
- (void)setX:;
- (void)setY:;
- (double)y;
- (void)writeTo:;
- (unsigned long long)hash;
- (double)x;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)pointValue;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)pointWithPoint:;
@end

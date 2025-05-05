@interface VCPProtoBounds : PBCodable
@property (nonatomic) double x0;
@property (nonatomic) double y0;
@property (nonatomic) double width;
@property (nonatomic) double height;
- (void)writeTo:;
- (void)setWidth:;
- (unsigned long long)hash;
- (void)copyTo:;
- (double)height;
- (void)mergeFrom:;
- (double)width;
- (void)setHeight:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)rectValue;
- (double)x0;
- (void)setX0:;
- (double)y0;
- (void)setY0:;
+ (id)boundsWithCGRect:;
@end

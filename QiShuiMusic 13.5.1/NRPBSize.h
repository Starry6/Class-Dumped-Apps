@interface NRPBSize : PBCodable
@property (nonatomic) float width;
@property (nonatomic) float height;
- (void)writeTo:;
- (void)setWidth:;
- (unsigned long long)hash;
- (void)copyTo:;
- (float)height;
- (void)mergeFrom:;
- (float)width;
- (void)setHeight:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end

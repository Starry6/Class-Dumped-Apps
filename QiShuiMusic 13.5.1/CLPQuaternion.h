@interface CLPQuaternion : PBCodable
@property (nonatomic) BOOL hasW;
@property (nonatomic) float w;
@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;
- (float)w;
- (void)setX:;
- (void)setY:;
- (float)y;
- (void)setZ:;
- (void)writeTo:;
- (unsigned long long)hash;
- (float)x;
- (BOOL)hasW;
- (void)copyTo:;
- (void)mergeFrom:;
- (float)z;
- (void)setW:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setHasW:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end

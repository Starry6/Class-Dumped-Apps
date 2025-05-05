@interface CLPLOGENTRYVISIONCGSize : PBCodable
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) double width;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) double height;
- (BOOL)hasWidth;
- (BOOL)hasHeight;
- (void)setHasWidth:;
- (void)writeTo:;
- (void)setWidth:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasHeight:;
- (double)height;
- (void)mergeFrom:;
- (double)width;
- (void)setHeight:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end

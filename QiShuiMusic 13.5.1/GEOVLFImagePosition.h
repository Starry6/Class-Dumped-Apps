@interface GEOVLFImagePosition : PBCodable
@property (nonatomic) BOOL hasX;
@property (nonatomic) float x;
@property (nonatomic) BOOL hasY;
@property (nonatomic) float y;
- (void)setHasX:;
- (void)setHasY:;
- (void)readAll:;
- (BOOL)hasY;
- (void)setX:;
- (id)initWithJSON:;
- (void)setY:;
- (id)jsonRepresentation;
- (float)y;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (float)x;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasX;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end

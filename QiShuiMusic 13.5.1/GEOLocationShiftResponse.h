@interface GEOLocationShiftResponse : PBCodable
@property (nonatomic) {GEOPixelPoint=ddi{?=b1}} shiftedPixel;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)shiftedPixel;
- (void)setShiftedPixel:;
+ (BOOL)isValid:;
@end

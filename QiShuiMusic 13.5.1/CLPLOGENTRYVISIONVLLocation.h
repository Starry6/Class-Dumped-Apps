@interface CLPLOGENTRYVISIONVLLocation : PBCodable
@property (nonatomic) BOOL hasCoordinate;
@property (nonatomic) CLPLOGENTRYVISIONSimdDoubleM coordinate;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;
- (void)setHasHorizontalAccuracy:;
- (double)horizontalAccuracy;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setHorizontalAccuracy:;
- (void).cxx_destruct;
- (id)coordinate;
- (BOOL)readFrom:;
- (id)description;
- (BOOL)hasCoordinate;
- (id)dictionaryRepresentation;
- (void)setCoordinate:;
- (BOOL)hasHorizontalAccuracy;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end

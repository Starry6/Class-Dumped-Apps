@interface CLPLOGENTRYVISIONLSLLocationCoordinate : PBCodable
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) double longitude;
- (double)latitude;
- (void)writeTo:;
- (BOOL)hasLongitude;
- (unsigned long long)hash;
- (BOOL)hasLatitude;
- (void)copyTo:;
- (void)setHasLatitude:;
- (void)mergeFrom:;
- (void)setLatitude:;
- (void)setHasLongitude:;
- (void)setLongitude:;
- (BOOL)readFrom:;
- (id)description;
- (double)longitude;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end

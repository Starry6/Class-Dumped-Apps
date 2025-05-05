@interface GEOPDRating : PBCodable
- (id)jsonRepresentation;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)displayTitle;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)ratingForPlaceData:type:;
+ (id)ratingListForPlaceData:type:;
@end

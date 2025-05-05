@interface GEOPDAttribution : PBCodable
- (id)init;
- (BOOL)_isYelp;
- (id)jsonRepresentation;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)attributionForPlaceDataReview:;
+ (id)componentLevelAttributionForPlaceDataPhotos:;
+ (id)attributionForPlaceDataEntity:;
+ (id)attributionForPlaceDataEncyclopedia:;
+ (id)attributionForPlaceDataRestaurantReservationLink:;
+ (id)attributionForAnnotatedItemList:placeData:;
@end

@interface AMapGeoPoint : AMapSearchObject
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
- (id)coordinateString;
- (double)latitude;
- (void)setLatitude:;
- (void)setLongitude:;
- (id)description;
- (double)longitude;
+ (id)locationWithLatitude:longitude:;
+ (id)ajo_mapping;
+ (id)locationWithString:;
+ (id)locationWithYuntuString:;
@end

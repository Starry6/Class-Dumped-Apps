@interface PLRevGeoPlaceAnnotation : NSObject
@property (nonatomic) NSInteger placeLevel;
@property (nonatomic) NSString placeName;
- (id)init;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)placeName;
- (void)setPlaceName:;
- (int)placeLevel;
- (void)setPlaceLevel:;
@end

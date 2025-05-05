@interface AMapReGeocode : AMapSearchObject
@property (nonatomic) NSString formattedAddress;
@property (nonatomic) AMapAddressComponent addressComponent;
@property (nonatomic) NSArray roads;
@property (nonatomic) NSArray roadinters;
@property (nonatomic) NSArray pois;
@property (nonatomic) NSArray aois;
- (id)addressComponent;
- (id)aois;
- (id)roadinters;
- (void)setAddressComponent:;
- (void)setAois:;
- (void)setPois:;
- (void)setRoadinters:;
- (void)setRoads:;
- (id)init;
- (void).cxx_destruct;
- (id)pois;
- (void)setFormattedAddress:;
- (id)roads;
- (id)formattedAddress;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end

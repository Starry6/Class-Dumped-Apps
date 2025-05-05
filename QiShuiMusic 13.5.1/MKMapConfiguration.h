@interface MKMapConfiguration : NSObject
@property (nonatomic) q landscape;
@property (nonatomic) q elevationStyle;
- (long long)landscape;
- (void)setLandscape:;
- (void)_removeObserver:context:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)updateMapViewState:;
- (void)inheritStateFromMapView:;
- (void)_addObserver:options:context:;
- (BOOL)isEqual:;
- (id)initWithElevationStyle:;
- (id)copyWithZone:;
- (long long)elevationStyle;
- (void)setElevationStyle:;
+ (BOOL)supportsSecureCoding;
+ (id)_mapConfigurationWithCartographicConfiguration:;
+ (id)_potentiallyLossy_mapConfigurationWithCartographicConfiguration:;
+ (id)_cartographicConfigurationForMapConfiguration:;
@end

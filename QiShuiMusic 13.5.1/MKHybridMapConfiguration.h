@interface MKHybridMapConfiguration : MKMapConfiguration
@property (nonatomic) MKPointOfInterestFilter pointOfInterestFilter;
@property (nonatomic) BOOL showsTraffic;
- (id)init;
- (id)pointOfInterestFilter;
- (void)_removeObserver:context:;
- (BOOL)showsTraffic;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setPointOfInterestFilter:;
- (void)updateMapViewState:;
- (void)setShowsTraffic:;
- (void).cxx_destruct;
- (void)inheritStateFromMapView:;
- (void)_addObserver:options:context:;
- (BOOL)isEqual:;
- (id)initWithElevationStyle:;
- (id)copyWithZone:;
- (id)initWithLandscape:;
- (BOOL)isEqualToHybridMapConfiguration:;
+ (BOOL)supportsSecureCoding;
@end

@interface VKARWalkingArrivalFeature : VKARWalkingFeature
@property (nonatomic) NSArray storeFronts;
@property (nonatomic) GEOFeatureStyleAttributes styleAttributes;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)styleAttributes;
- (id)initWithARInfo:undulationProvider:iconStyleAttributes:;
- (id)initWithPosition:iconStyleAttributes:;
- (id)initWithGeocentricPosition:iconStyleAttributes:;
- (id)initWithStoreFront:iconStyleAttributes:;
- (id)initWithStoreFronts:iconStyleAttributes:;
- (id)_stringForAttributes;
- (id)storeFronts;
@end

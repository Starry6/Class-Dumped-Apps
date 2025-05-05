@interface VKRouteAnnotation : VKTrafficFeature
@property (nonatomic) GEOStyleAttributes originalStyleAttributes;
@property (nonatomic) GEOMiniCard infoCard;
- (void).cxx_destruct;
- (id)infoCard;
- (void)populateDebugNode:;
- (id)initWithRouteAnnotation:onRoute:;
- (id)_originalStyleAttributes;
@end

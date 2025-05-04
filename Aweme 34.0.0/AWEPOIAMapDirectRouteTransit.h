@interface AWEPOIAMapDirectRouteTransit : MTLModel
@property (nonatomic) NSString duration;
@property (nonatomic) NSArray segments;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)segments;
- (void)setSegments:;
- (void)setDuration:;
- (void).cxx_destruct;
- (id)duration;
+ (BOOL)automaticallyDefaultMapping;
+ (id)segmentsJSONTransformer;
@end

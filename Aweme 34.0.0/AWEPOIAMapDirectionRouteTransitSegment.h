@interface AWEPOIAMapDirectionRouteTransitSegment : MTLModel
@property (nonatomic) AWEPOIAMapDirectionRoutePath walking;
@property (nonatomic) AWEPOIAMapDirectionRouteTransitSegmentBusLines bus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBus:;
- (id)walking;
- (void).cxx_destruct;
- (id)bus;
- (void)setWalking:;
+ (BOOL)automaticallyDefaultMapping;
@end

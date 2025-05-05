@interface GEOComposedTransitBaseRouteSegment : GEOComposedRouteSegment
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithComposedRoute:routeSegmentType:stepRange:transitStepRange:pointRange:;
- (id)startingTransitStop;
- (id)endingTransitStop;
- (id)transitStepRange;
+ (BOOL)supportsSecureCoding;
@end

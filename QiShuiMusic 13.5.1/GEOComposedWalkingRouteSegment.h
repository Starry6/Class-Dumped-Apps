@interface GEOComposedWalkingRouteSegment : GEOComposedRouteSegment
@property (nonatomic) Q transitIncidentMessageStepIndex;
@property (nonatomic) GEOComposedWalkingRouteStep lastWalkingStep;
@property (nonatomic) GEOComposedTransitWalkingRouteStep arrivalStep;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithComposedRoute:stepRange:pointRange:transitIncidentMessageStepIndex:;
- (id)lastWalkingStep;
- (id)arrivalStep;
- (id)_transitIncidentMessageStep;
- (unsigned long long)transitIncidentMessageStepIndex;
+ (BOOL)supportsSecureCoding;
@end

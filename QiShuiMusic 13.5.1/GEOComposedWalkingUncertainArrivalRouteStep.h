@interface GEOComposedWalkingUncertainArrivalRouteStep : GEOComposedWalkingRouteStep
- (double)distance;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned int)duration;
- (BOOL)isUncertainArrival;
- (id)initWithComposedRoute:aggregatedGEOSteps:stepIndex:pointRange:maneuverPointRange:;
- (unsigned int)_calculateAggregatedStepsDuration;
- (double)_calculateAggregatedStepsDistance;
+ (BOOL)supportsSecureCoding;
@end

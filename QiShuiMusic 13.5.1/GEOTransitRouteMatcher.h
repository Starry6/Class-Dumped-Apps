@interface GEOTransitRouteMatcher : GEORouteMatcher
@property (nonatomic) double distanceToClosestWalkingSegment;
- (void).cxx_destruct;
- (void)_finishRouteMatch:previousRouteMatch:forLocation:;
- (void)_startRouteMatch;
- (void)_considerCandidateMatch:;
- (double)_scoreModifierForStep:previousStep:;
- (BOOL)_shouldConsiderCourseForLocation:;
- (id)initWithRoute:motionContext:;
- (BOOL)isStationCoordinateOnRoute:;
- (id)motionContext;
- (BOOL)_stepsInSameRange:nextStep:;
- (void)_insertUpdater:into:;
- (double)distanceToClosestWalkingSegment;
@end

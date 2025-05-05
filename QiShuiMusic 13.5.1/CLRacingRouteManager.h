@interface CLRacingRouteManager : NSObject
- (void).cxx_destruct;
- (void)reset;
- (id).cxx_construct;
- (unsigned long long)numberOfRoutePointsToAdd;
- (unsigned long long)configureWithWorkoutActivityType:bufferSize:offRouteGraceDurationInSec:;
- (unsigned long long)addRoutePoints:;
- (id)advanceToPoint:;
- (id)getRaceParameters;
- (BOOL)setRaceParameters:;
- (double)recoverRaceAtTimestamp;
@end

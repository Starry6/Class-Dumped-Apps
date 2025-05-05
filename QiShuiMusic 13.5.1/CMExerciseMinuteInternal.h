@interface CMExerciseMinuteInternal : NSObject
- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_startUpdatesFromRecord:handler:;
- (void)_stopUpdates;
- (void)_startUpdatesWithHandler:;
- (void)_queryExerciseMinutesFromRecord:handler:;
@end

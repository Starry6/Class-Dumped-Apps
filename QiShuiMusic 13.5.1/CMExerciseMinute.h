@interface CMExerciseMinute : NSObject
@property (nonatomic) CMExerciseMinuteInternal _internal;
- (id)_internal;
- (id)init;
- (void)dealloc;
- (void)stopUpdates;
- (void)startUpdatesFromRecord:handler:;
- (void)startUpdatesWithHandler:;
- (void)queryExerciseMinutesFromRecord:handler:;
+ (id)maxExerciseMinuteDataEntries;
+ (BOOL)isExerciseMinuteAvailable;
@end

@interface CMWorkoutManager : NSObject
@property (nonatomic) CMWorkoutManagerInternal _internal;
@property (nonatomic) <CMWorkoutManagerDelegate> delegate;
- (id)_internal;
- (id)init;
- (void)dealloc;
- (void)endWorkoutSession:;
- (void)setDelegate:;
- (id)delegate;
- (void)startWorkout:;
- (void)stopWorkout:;
- (unsigned long long)supportedMetricsForWorkoutType:;
- (void)getPromptsNeededForWorkoutType:handler:;
- (void)setSuggestedStopTimeout:;
- (void)userDismissedWorkoutAlert;
- (void)triggerWorkoutLocationUpdateForTesting:;
- (void)setMode:forWorkout:;
- (void)beginWorkoutSession:withWorkout:enableWorkoutChangeDetection:;
- (void)setCurrentWorkoutType:isManualTransition:;
- (void)pauseWorkout:;
- (void)resumeWorkout:;
+ (BOOL)isAvailable;
@end

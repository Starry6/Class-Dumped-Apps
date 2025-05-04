@interface AWETokamakMemoryRecorder : NSObject
- (void)reportMemoryStatusWithWithMemory:memoryWarningFlags:;
- (void)logMemoryStatusWithMemory:reason:memoryWarningFlags:;
- (void)updateSceneStartTime;
- (void)memoryLevelStrategy:reason:memoryWarningFlags:;
- (BOOL)isOSVersionGreaterThanOrEqualTo:minor:patch:;
- (void).cxx_destruct;
- (void)start;
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
+ (id)shared;
@end

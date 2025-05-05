@interface TLBacklight : NSObject
@property (nonatomic) q backlightStatus;
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (void)dealloc;
- (long long)backlightStatus;
- (void)_assertNotRunningOnAccessQueue;
- (void).cxx_destruct;
- (void)_performBlockOnAccessQueue:;
- (void)_assertRunningOnAccessQueue;
- (void)_setBacklightStatus:;
- (void)_setObservingBacklight:;
- (void)_notifyObservers:ofUpdatedBacklightStatus:;
+ (id)sharedBacklight;
@end

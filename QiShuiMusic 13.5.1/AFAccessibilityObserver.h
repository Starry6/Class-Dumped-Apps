@interface AFAccessibilityObserver : NSObject
@property (nonatomic) AFAccessibilityState state;
- (void)removeListener:;
- (void)addListener:;
- (id)init;
- (id)currentState;
- (id)state;
- (void).cxx_destruct;
- (void)getStateWithCompletion:;
- (void)voiceOverTouchEnabledPreferenceDidChange:;
- (void)vibrationDisabledPreferenceDidChange:;
- (BOOL)_fetchIsVoiceOverTouchEnabled;
- (BOOL)_fetchIsVibrationDisabled;
- (void)_updateVoiceOverTouchEnabledPreference;
- (void)_updateVibrationDisabledPreference;
- (void)_setState:clearDirtyFlags:;
+ (id)sharedObserver;
@end

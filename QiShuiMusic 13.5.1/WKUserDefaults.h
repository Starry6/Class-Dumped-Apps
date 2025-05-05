@interface WKUserDefaults : NSUserDefaults
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)initWithSuiteName:;
- (void)findPreferenceChangesAndNotifyForKeys:toValuesForKeys:;
- (void)_notifyObserversOfChangeFromValuesForKeys:toValuesForKeys:;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

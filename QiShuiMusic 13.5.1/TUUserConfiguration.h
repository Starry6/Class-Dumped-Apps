@interface TUUserConfiguration : TUConfiguration
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)synchronize;
+ (id)registeredDefaults;
+ (id)userDefaults;
@end

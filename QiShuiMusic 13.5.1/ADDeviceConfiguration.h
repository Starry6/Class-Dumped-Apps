@interface ADDeviceConfiguration : NSObject
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (BOOL)createPropertyForKey:;
- (void)updateValue:forKey:;
+ (float)floatForKey:;
+ (id)numberForKey:;
+ (BOOL)boolForKey:;
+ (id)sharedConfiguration;
+ (id)stringForKey:;
+ (double)doubleForKey:;
+ (long long)integerForKey:;
+ (id)listForKey:;
+ (id)getDefaultConfiguration;
@end

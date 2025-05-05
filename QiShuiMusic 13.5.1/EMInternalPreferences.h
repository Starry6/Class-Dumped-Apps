@interface EMInternalPreferences : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)log;
+ (id)observeChangesForPreference:usingBlock:;
+ (BOOL)preferenceEnabled:;
+ (void)observeValueForKeyPath:ofObject:change:context:;
+ (BOOL)_hasUserDefaultValueForKey:expectedValue:;
+ (BOOL)_preferenceEnabled:;
+ (void)setPreference:enabled:;
+ (BOOL)_userDefaultEnabledForKey:defaultValue:;
+ (id)defaultForPreference:;
+ (void)_setUserDefaultEnabled:forKey:;
+ (void)_registerForDefaultChanges;
@end

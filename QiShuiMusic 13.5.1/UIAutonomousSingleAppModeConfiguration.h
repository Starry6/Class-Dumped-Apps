@interface UIAutonomousSingleAppModeConfiguration : NSObject
@property (nonatomic) Q style;
@property (nonatomic) BOOL allowsLockButton;
@property (nonatomic) BOOL allowsAutoLock;
@property (nonatomic) BOOL allowsAccessibilityShortcut;
@property (nonatomic) BOOL automaticallyRelaunchesAfterAppCrash;
@property (nonatomic) NSDictionary managedConfigurationSettings;
@property (nonatomic) NSDictionary propertiesAsDictionary;
- (void)setStyle:;
- (void).cxx_destruct;
- (unsigned long long)style;
- (id)copyWithZone:;
- (BOOL)allowsLockButton;
- (void)setAllowsLockButton:;
- (BOOL)allowsAutoLock;
- (void)setAllowsAutoLock:;
- (BOOL)allowsAccessibilityShortcut;
- (void)setAllowsAccessibilityShortcut:;
- (BOOL)automaticallyRelaunchesAfterAppCrash;
- (void)setAutomaticallyRelaunchesAfterAppCrash:;
- (id)propertiesAsDictionary;
- (BOOL)_boolValueForFeatureKey:;
- (void)_setBoolValue:forFeatureKey:;
- (BOOL)__gaxTrampoline_defaultBoolValueForFeatureKey:;
- (id)managedConfigurationSettings;
- (void)setManagedConfigurationSettings:;
+ (id)defaultConfiguration;
+ (id)defaultConfigurationForStyle:;
@end

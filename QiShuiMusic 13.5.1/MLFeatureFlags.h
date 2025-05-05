@interface MLFeatureFlags : NSObject
@property (nonatomic) NSUserDefaults userDefaults;
@property (nonatomic) NSMutableDictionary flags;
@property (nonatomic) NSMutableDictionary overrideOriginalValues;
- (id)init;
- (id)userDefaults;
- (void).cxx_destruct;
- (id)flags;
- (void)defineFeatures;
- (BOOL)isMPSGraphEnabled;
- (BOOL)isMPSGraphFP16Enabled;
- (void)addFeature:withControlName:defaultValue:;
- (BOOL)isFeatureEnabled:;
- (id)controlKeyForFeature:;
- (BOOL)setOverride:forFeature:;
- (BOOL)removeOverrideForFeature:;
- (id)overrideOriginalValues;
+ (id)sharedFeatureFlags;
@end

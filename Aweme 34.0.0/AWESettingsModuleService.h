@interface AWESettingsModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchSettings;
- (void)fetchSettingsWithHeader:;
- (void)delayFetchSettings;
- (void)delayFetchSettingsWithHeader:;
- (void)registerBusinessSettingsClass:;
- (BOOL)combineSettingsRequest;
- (id)aweClientABTestManager;
- (void)registerClientABTest:;
- (void)addAPIRequestModifier:;
- (id)settingsManager;
@end

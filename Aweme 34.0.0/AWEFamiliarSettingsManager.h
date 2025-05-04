@interface AWEFamiliarSettingsManager : NSObject
@property (nonatomic) NSDictionary currentSettings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (id)init;
- (void)dealloc;
- (id)currentSettings;
- (void).cxx_destruct;
- (void)setCurrentSettings:;
+ (void)_aweLazyRegisterLoad;
+ (void)doOriginalActions;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:;
+ (id)settingsRequestParamsDictionary;
+ (void)updateSettingsFailedWithStatusCode:;
+ (id)cachedSettings;
+ (void)cacheSettings:;
+ (void)updateSettingsWithDictionary:fromRequest:;
+ (void)loadCachedSettings;
+ (id)sharedInstance;
+ (id)subscribers;
@end

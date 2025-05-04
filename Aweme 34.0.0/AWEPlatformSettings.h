@interface AWEPlatformSettings : AWEBaseSettings
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchSettings;
- (id)init;
- (void)updateSettings:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (void)doOriginalActions;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:;
+ (void)asyncPlatformSettingsIO:;
+ (void)_aweLazyRegisterLoad_SettingsComboRequest;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end

@interface CNAvatarViewControllerSettings : NSObject
@property (nonatomic) <CNUIPRLikenessResolver> likenessResolver;
@property (nonatomic) <CNUILikenessRendering> likenessRenderer;
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (nonatomic) Q style;
- (void)setContactStore:;
- (void)setThreeDTouchEnabled:;
- (void)setSchedulerProvider:;
- (BOOL)threeDTouchEnabled;
- (void)setLikenessResolver:;
- (void)setStyle:;
- (id)schedulerProvider;
- (id)likenessRenderer;
- (void)setLikenessRenderer:;
- (void).cxx_destruct;
- (id)contactStore;
- (id)likenessResolver;
- (id)initWithLikenessResolver:likenessRenderer:contactStore:threeDTouchEnabled:schedulerProvider:;
- (unsigned long long)style;
+ (id)defaultSettings;
+ (id)defaultSettingsWithCacheSize:threeDTouchEnabled:;
+ (id)settingsWithContactStore:;
+ (BOOL)threeDTouchEnabledDefaultValue;
+ (id)settingsWithContactStore:threeDTouchEnabled:;
+ (id)settingsWithContactStore:cacheSize:threeDTouchEnabled:;
+ (id)settingsWithLikenessResolver:likenessRenderer:contactStore:threeDTouchEnabled:schedulerProvider:;
@end

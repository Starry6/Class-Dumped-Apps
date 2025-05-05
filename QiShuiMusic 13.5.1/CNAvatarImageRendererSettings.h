@interface CNAvatarImageRendererSettings : NSObject
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) <CNUIPRLikenessResolver> likenessResolver;
@property (nonatomic) <CNUILikenessRendering> likenessRenderer;
@property (nonatomic) Q style;
- (void)setStyle:;
- (id)schedulerProvider;
- (id)likenessRenderer;
- (void).cxx_destruct;
- (id)likenessResolver;
- (unsigned long long)style;
- (id)initWithLikenessResolver:likenessRenderer:schedulerProvider:;
+ (id)defaultSettings;
+ (id)defaultSettingsWithCacheSize:;
+ (id)offMainThreadSynchronousRenderingOnlySettingsWithCacheSize:;
+ (id)settingsWithContactStore:;
+ (id)settingsWithContactStore:cacheSize:;
+ (id)settingsWithContactStore:schedulerProvider:;
+ (id)settingsWithContactStore:cacheSize:schedulerProvider:;
+ (id)settingsWithContactStore:cacheSize:schedulerProvider:concurrentCaches:;
@end

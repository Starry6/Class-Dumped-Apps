@interface INStringLocalizer : NSObject
@property (nonatomic) {os_unfair_lock_s=I} lock;
@property (nonatomic) NSMapTable bundlesByIdentifier;
@property (nonatomic) NSMapTable bundlesByURL;
@property (nonatomic) NSMapTable bundleLocalizations;
@property (nonatomic) NSMapTable preferredBundleLocalizations;
@property (nonatomic) NSArray preferredLanguages;
@property (nonatomic) NSString languageCode;
@property (nonatomic) NSLocale locale;
- (id)init;
- (BOOL)matchesBundleLocalizations:;
- (id)languageCode;
- (id)localizationsForBundle:;
- (id)bundleWithIdentifier:fileURL:;
- (id)locale;
- (id)bundlesByURL;
- (id)lock;
- (id)bundlesByIdentifier;
- (id)bundleLocalizations;
- (id)preferredBundleLocalizations;
- (id)preferredLanguages;
- (id)preferredLocalizationsForBundle:;
- (void).cxx_destruct;
- (id)initWithLanguageCode:;
+ (id)siriLocalizer;
+ (id)localizerForLanguage:;
+ (id)alternativeLocales;
@end

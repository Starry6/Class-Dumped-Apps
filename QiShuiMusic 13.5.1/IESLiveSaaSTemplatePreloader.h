@interface IESLiveSaaSTemplatePreloader : NSObject
@property (nonatomic) <IESLiveSaaSLanguageService> langService;
@property (nonatomic) IESLiveSaaSTemplateEngine engine;
@property (nonatomic) BOOL isLangPackageFetched;
@property (nonatomic) BOOL isUpdateLangPackageTimingOptEnabled;
@property (nonatomic) q firstColdLaunchDelayInSec;
- (void)setLangService:;
- (long long)firstColdLaunchDelayInSec;
- (BOOL)hasFetchedLangPackageEver;
- (void)ieslive_reallyUpdateLangTemplate;
- (void)ieslive_setupBinding;
- (void)ieslive_updateLangPackageOnce;
- (BOOL)isLangPackageFetched;
- (BOOL)isUpdateLangPackageTimingOptEnabled;
- (id)langService;
- (void)markLangPackageFetched;
- (void)setFirstColdLaunchDelayInSec:;
- (void)setIsLangPackageFetched:;
- (void)setIsUpdateLangPackageTimingOptEnabled:;
- (void)updateLangPackageIfNeeded:;
- (id)engine;
- (void)setEngine:;
- (id)init;
- (void).cxx_destruct;
+ (id)smartLoader;
@end

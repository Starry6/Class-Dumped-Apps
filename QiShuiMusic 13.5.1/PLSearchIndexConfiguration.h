@interface PLSearchIndexConfiguration : NSObject
@property (nonatomic) PLSpotlightTranslatorConfiguration translatorConfiguration;
@property (nonatomic) PLSearchIndexSceneTaxonomyProvider sceneTaxonomyProvider;
- (id)sceneTaxonomyProvider;
- (void).cxx_destruct;
- (id)translatorConfiguration;
- (void)setTranslatorConfiguration:;
- (void)setSceneTaxonomyProvider:;
+ (id)calendar;
+ (id)locale;
+ (unsigned long long)featureFlags;
@end

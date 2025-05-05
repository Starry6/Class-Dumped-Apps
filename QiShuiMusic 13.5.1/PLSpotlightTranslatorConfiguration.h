@interface PLSpotlightTranslatorConfiguration : NSObject
@property (nonatomic) PLSearchIndexSceneTaxonomyProvider sceneTaxonomyProvider;
@property (nonatomic) NSLocale locale;
@property (nonatomic) NSCalendar calendar;
@property (nonatomic) NSDictionary seasonSynonymsBySeason;
@property (nonatomic) NSDictionary synonymsByIndexCategoryMask;
- (id)calendar;
- (id)locale;
- (id)synonymsByIndexCategoryMask;
- (id)sceneTaxonomyProvider;
- (id)seasonSynonymsBySeason;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSceneTaxonomyProvider:locale:calendar:seasonSynonyms:synonymsByIndexCategoryMask:;
@end

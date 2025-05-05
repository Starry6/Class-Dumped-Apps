@interface BYLocaleDataSource : NSObject
@property (nonatomic) NSMutableArray suggestedCountries;
@property (nonatomic) NSMutableArray moreCountries;
@property (nonatomic) BOOL hasRecommendedLocaleFromLanguage;
@property (nonatomic) NSString language;
- (void)reloadData;
- (void)setLanguage:;
- (id)language;
- (void).cxx_destruct;
- (unsigned long long)numberOfRecommendedLocales;
- (unsigned long long)numberOfOtherLocales;
- (id)recommendedLocaleAtIndex:;
- (id)otherLocaleAtIndex:;
- (BOOL)hasRecommendedLocaleFromLanguage;
- (void)setHasRecommendedLocaleFromLanguage:;
- (id)suggestedCountries;
- (void)setSuggestedCountries:;
- (id)moreCountries;
- (void)setMoreCountries:;
+ (id)newWithLanguage:;
@end

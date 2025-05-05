@interface AMapSuggestion : AMapSearchObject
@property (nonatomic) NSArray keywords;
@property (nonatomic) NSArray cities;
- (id)keywords;
- (void)setKeywords:;
- (id)cities;
- (void)setCities:;
- (void).cxx_destruct;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end

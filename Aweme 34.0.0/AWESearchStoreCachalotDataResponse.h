@interface AWESearchStoreCachalotDataResponse : AWESearchResultCachalotDataResponse
@property (nonatomic) AWESearchNoResultsModel noResults;
@property (nonatomic) AWEGeneralSearchBackgroundModel searchBackgroundModel;
- (void)setSearchBackgroundModel:;
- (id)searchBackgroundModel;
- (void).cxx_destruct;
- (id)noResults;
- (void)setNoResults:;
+ (id)noResultsJSONTransformer;
+ (id)searchBackgroundModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

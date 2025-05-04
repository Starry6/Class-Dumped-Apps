@interface AWEFormatRouterParamSearch : JSONModel
@property (nonatomic) q formatId;
@property (nonatomic) NSString searchId;
@property (nonatomic) NSString searchResultId;
@property (nonatomic) NSString searchKeyword;
@property (nonatomic) NSString cacheKey;
@property (nonatomic) NSString listItemId;
@property (nonatomic) BOOL searchIsLogin;
- (id)searchId;
- (id)searchResultId;
- (void)setSearchId:;
- (void)setSearchResultId:;
- (id)searchKeyword;
- (BOOL)searchIsLogin;
- (id)listItemId;
- (void)setListItemId:;
- (void)setSearchKeyword:;
- (void)setSearchIsLogin:;
- (id)cacheKey;
- (void).cxx_destruct;
- (void)setCacheKey:;
- (long long)formatId;
- (void)setFormatId:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end

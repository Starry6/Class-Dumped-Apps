@interface AWEHangoutHeaderModel : AWEBaseApiModel
@property (nonatomic) AWEHangoutSearchBarModel searchBar;
- (id)initWithJsonObj:;
- (void)assignPropWithJsonObj:;
- (id)searchBar;
- (void)setSearchBar:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

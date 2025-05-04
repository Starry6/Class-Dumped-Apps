@interface AWEGeneralSearchHeaderBackgroundModel : AWESearchBackgroundModel
@property (nonatomic) q headerContentTheme;
@property (nonatomic) Q searchBarType;
- (void)setSearchBarType:;
- (unsigned long long)searchBarType;
- (long long)headerContentTheme;
- (void)setHeaderContentTheme:;
+ (id)JSONKeyPathsByPropertyKey;
@end

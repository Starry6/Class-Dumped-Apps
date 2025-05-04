@interface AWETeenAgeScopeModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString ageScopeDesc;
@property (nonatomic) Q ageScope;
- (unsigned long long)ageScope;
- (id)ageScopeDesc;
- (void)setAgeScopeDesc:;
- (void)setAgeScope:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AWEProfilePostWorkFilterModel : AWEBaseApiModel
@property (nonatomic) Q filterType;
@property (nonatomic) NSString filterName;
- (void)setFilterType:;
- (unsigned long long)filterType;
- (id)filterName;
- (void).cxx_destruct;
- (void)setFilterName:;
+ (id)JSONKeyPathsByPropertyKey;
@end

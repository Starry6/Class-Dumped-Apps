@interface AWEPLVFilterItem : AWEBaseApiModel
@property (nonatomic) NSString filterKey;
@property (nonatomic) NSArray filterValue;
- (id)filterKey;
- (void)setFilterKey:;
- (void).cxx_destruct;
- (id)filterValue;
- (void)setFilterValue:;
+ (id)JSONKeyPathsByPropertyKey;
@end

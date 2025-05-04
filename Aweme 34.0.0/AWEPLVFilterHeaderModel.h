@interface AWEPLVFilterHeaderModel : AWEBaseApiModel
@property (nonatomic) NSArray filterList;
- (id)filterList;
- (void)setFilterList:;
- (void).cxx_destruct;
+ (id)filterListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AWESearchSeedFilterModel : AWEBaseApiModel
@property (nonatomic) NSArray filterSections;
@property (nonatomic) NSNumber rank;
- (id)filterSections;
- (id)rank;
- (void)setRank:;
- (void).cxx_destruct;
+ (id)filterSectionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

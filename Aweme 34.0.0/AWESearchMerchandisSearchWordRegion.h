@interface AWESearchMerchandisSearchWordRegion : AWEBaseApiModel
@property (nonatomic) NSArray searchWordList;
- (id)searchWordList;
- (void)setSearchWordList:;
- (void).cxx_destruct;
+ (id)searchWordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

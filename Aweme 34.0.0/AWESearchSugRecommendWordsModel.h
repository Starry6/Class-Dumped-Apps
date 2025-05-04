@interface AWESearchSugRecommendWordsModel : AWEBaseApiModel
@property (nonatomic) NSArray sugList;
@property (nonatomic) NSString listType;
@property (nonatomic) NSString listTitle;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) Q displayCount;
- (id)sugList;
- (void)setSugList:;
- (void)setDisplayCount:;
- (void).cxx_destruct;
- (unsigned long long)displayCount;
- (id)listType;
- (void)setListType:;
- (id)extraInfo;
- (id)listTitle;
- (void)setListTitle:;
- (void)setExtraInfo:;
+ (id)sugListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

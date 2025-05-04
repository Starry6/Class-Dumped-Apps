@interface AWESearchHotAdDefaultWordModel : MTLModel
@property (nonatomic) NSString defaultWord;
@property (nonatomic) NSString searchWord;
@property (nonatomic) q position;
@property (nonatomic) AWEHotSearchAdDataModel adData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)searchWord;
- (void)setSearchWord:;
- (id)defaultWord;
- (void)setDefaultWord:;
- (long long)position;
- (id)adData;
- (void).cxx_destruct;
- (void)setAdData:;
- (void)setPosition:;
+ (id)adDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

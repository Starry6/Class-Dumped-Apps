@interface AWELiveStreamSearchEcomItemModel : MTLModel
@property (nonatomic) NSString source;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSArray wordsArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)wordsArray;
- (void)setWordsArray:;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (id)params;
- (void)setParams:;
+ (id)wordsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

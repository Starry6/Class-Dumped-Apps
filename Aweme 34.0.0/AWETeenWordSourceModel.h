@interface AWETeenWordSourceModel : AWEBaseApiModel
@property (nonatomic) NSArray wordsArray;
@property (nonatomic) NSString source;
@property (nonatomic) NSString type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString queryID;
- (id)wordsArray;
- (void)setWordsArray:;
- (void)setQueryID:;
- (id)type;
- (id)queryID;
- (void)setType:;
- (void).cxx_destruct;
- (id)source;
- (id)title;
- (void)setSource:;
- (void)setTitle:;
+ (id)wordsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AWESearchMovieTopicAladdinModel : AWEBaseApiModel
@property (nonatomic) NSString aID;
@property (nonatomic) NSString key;
@property (nonatomic) NSString keyword;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray topicArray;
- (id)topicArray;
- (void)setTopicArray:;
- (id)aID;
- (void)setAID:;
- (void)setKey:;
- (id)key;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)keyword;
- (void)setKeyword:;
+ (id)topicArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

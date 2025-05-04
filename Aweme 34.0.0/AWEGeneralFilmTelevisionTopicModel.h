@interface AWEGeneralFilmTelevisionTopicModel : AWEBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString cID;
@property (nonatomic) q index;
@property (nonatomic) NSArray topicArray;
@property (nonatomic) BOOL showDivideLine;
- (void)setCID:;
- (void)setShowDivideLine:;
- (id)topicArray;
- (void)setTopicArray:;
- (BOOL)showDivideLine;
- (id)cID;
- (void)setIndex:;
- (long long)index;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)topicArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface IESIMGeneralFilmTelevisionTopicModel : IESIMBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString cID;
@property (nonatomic) q index;
@property (nonatomic) NSArray topicArray;
@property (nonatomic) BOOL showDivideLine;
- (id)cID;
- (void)setCID:;
- (void)setShowDivideLine:;
- (void)setTopicArray:;
- (BOOL)showDivideLine;
- (id)topicArray;
- (void)setName:;
- (long long)index;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)name;
+ (id)topicArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

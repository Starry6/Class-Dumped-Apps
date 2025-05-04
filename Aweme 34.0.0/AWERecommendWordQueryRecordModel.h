@interface AWERecommendWordQueryRecordModel : AWEBaseApiModel
@property (nonatomic) NSString info;
@property (nonatomic) NSString wordsSource;
@property (nonatomic) NSString queryID;
@property (nonatomic) NSString rsWordRefer;
- (id)wordsSource;
- (id)rsWordRefer;
- (void)setRsWordRefer:;
- (void)setWordsSource:;
- (void)setInfo:;
- (id)info;
- (void)setQueryID:;
- (id)queryID;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

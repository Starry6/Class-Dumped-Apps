@interface AWEOneDayDailyModel : AWEBaseApiModel
@property (nonatomic) NSNumber date;
@property (nonatomic) NSArray storyList;
- (void)setStoryList:;
- (id)storyList;
- (void)setDate:;
- (void).cxx_destruct;
- (id)date;
+ (id)storyListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface IESIMOneDayDailyModel : IESIMBaseApiModel
@property (nonatomic) NSNumber date;
@property (nonatomic) NSArray storyList;
- (void)setStoryList:;
- (id)storyList;
- (id)date;
- (void).cxx_destruct;
- (void)setDate:;
+ (id)storyListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

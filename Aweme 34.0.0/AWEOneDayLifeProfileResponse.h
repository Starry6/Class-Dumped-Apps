@interface AWEOneDayLifeProfileResponse : AWEBaseApiModel
@property (nonatomic) NSArray dailyStoryList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
- (id)dailyStoryList;
- (void)setDailyStoryList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)dailyStoryListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

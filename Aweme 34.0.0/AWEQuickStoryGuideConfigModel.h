@interface AWEQuickStoryGuideConfigModel : AWEBaseApiModel
@property (nonatomic) NSNumber showDaysLimit;
@property (nonatomic) NSNumber dailyShowLimit;
@property (nonatomic) NSNumber intervalHours;
@property (nonatomic) NSNumber dislikeCloseLimitInSeconds;
@property (nonatomic) NSNumber dislikeShowDaysLimit;
@property (nonatomic) NSArray recommendActionSort;
- (void)setDailyShowLimit:;
- (void)setDislikeCloseLimitInSeconds:;
- (void)setDislikeShowDaysLimit:;
- (void)setIntervalHours:;
- (void)setShowDaysLimit:;
- (id)dailyShowLimit;
- (id)dislikeCloseLimitInSeconds;
- (id)dislikeShowDaysLimit;
- (id)intervalHours;
- (id)showDaysLimit;
- (id)recommendActionSort;
- (void)setRecommendActionSort:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

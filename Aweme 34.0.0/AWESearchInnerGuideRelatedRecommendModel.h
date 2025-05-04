@interface AWESearchInnerGuideRelatedRecommendModel : AWEBaseApiModel
@property (nonatomic) q dailyGuideNums;
@property (nonatomic) q weaklyGuideNums;
@property (nonatomic) q maxGuideNums;
@property (nonatomic) NSString text;
@property (nonatomic) NSNumber showAfterSeconds;
@property (nonatomic) NSNumber dismissSeconds;
- (long long)dailyGuideNums;
- (void)setDailyGuideNums:;
- (long long)weaklyGuideNums;
- (void)setWeaklyGuideNums:;
- (long long)maxGuideNums;
- (void)setMaxGuideNums:;
- (id)showAfterSeconds;
- (void)setShowAfterSeconds:;
- (id)dismissSeconds;
- (void)setDismissSeconds:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

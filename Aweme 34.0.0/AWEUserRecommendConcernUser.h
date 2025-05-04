@interface AWEUserRecommendConcernUser : AWEBaseApiModel
@property (nonatomic) AWEUserModel user;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) UIColor beginColor;
@property (nonatomic) UIColor endColor;
@property (nonatomic) q rankIndex;
@property (nonatomic) NSString trackerRecReason;
- (id)awemeList;
- (void)setAwemeList:;
- (long long)rankIndex;
- (id)beginColor;
- (void)setBeginColor:;
- (void)setRankIndex:;
- (id)trackerRecReason;
- (void)setTrackerRecReason:;
- (id)user;
- (void)setUser:;
- (void).cxx_destruct;
- (id)endColor;
- (void)setEndColor:;
+ (id)awemeListJSONTransformer;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

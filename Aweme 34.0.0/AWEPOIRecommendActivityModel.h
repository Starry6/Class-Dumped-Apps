@interface AWEPOIRecommendActivityModel : AWEBaseApiModel
@property (nonatomic) NSString activityID;
@property (nonatomic) NSString activityTitle;
@property (nonatomic) NSString activityDescription;
@property (nonatomic) AWEURLModel activityURL;
@property (nonatomic) NSString activitySchema;
@property (nonatomic) NSString activitySource;
@property (nonatomic) Q activityType;
- (id)activitySchema;
- (void)setActivityURL:;
- (void)setActivitySchema:;
- (void)setActivitySource:;
- (void)setActivityDescription:;
- (void)setActivityType:;
- (void)setActivityTitle:;
- (unsigned long long)activityType;
- (id)activityTitle;
- (id)activityDescription;
- (void).cxx_destruct;
- (id)activityID;
- (void)setActivityID:;
- (id)activityURL;
- (id)activitySource;
+ (id)JSONKeyPathsByPropertyKey;
@end

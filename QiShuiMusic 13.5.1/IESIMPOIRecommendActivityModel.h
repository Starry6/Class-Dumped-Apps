@interface IESIMPOIRecommendActivityModel : IESIMBaseApiModel
@property (nonatomic) NSString activityID;
@property (nonatomic) NSString activityTitle;
@property (nonatomic) NSString activityDescription;
@property (nonatomic) IESIMURLModel activityURL;
@property (nonatomic) NSString activitySchema;
@property (nonatomic) NSString activitySource;
@property (nonatomic) Q activityType;
- (void)setActivityURL:;
- (id)activitySchema;
- (id)activitySource;
- (void)setActivitySchema:;
- (void)setActivitySource:;
- (id)activityTitle;
- (unsigned long long)activityType;
- (void)setActivityType:;
- (id)activityDescription;
- (void).cxx_destruct;
- (void)setActivityTitle:;
- (void)setActivityDescription:;
- (id)activityID;
- (id)activityURL;
- (void)setActivityID:;
+ (id)JSONKeyPathsByPropertyKey;
@end

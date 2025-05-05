@interface IESIMPOICouponActivityModel : IESIMBaseApiModel
@property (nonatomic) q activityID;
@property (nonatomic) NSString activityTitle;
- (id)activityTitle;
- (void).cxx_destruct;
- (void)setActivityTitle:;
- (long long)activityID;
- (void)setActivityID:;
+ (id)activityIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

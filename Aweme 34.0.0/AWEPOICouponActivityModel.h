@interface AWEPOICouponActivityModel : AWEBaseApiModel
@property (nonatomic) q activityID;
@property (nonatomic) NSString activityTitle;
- (void)setActivityTitle:;
- (id)activityTitle;
- (void).cxx_destruct;
- (long long)activityID;
- (void)setActivityID:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)activityIDJSONTransformer;
@end

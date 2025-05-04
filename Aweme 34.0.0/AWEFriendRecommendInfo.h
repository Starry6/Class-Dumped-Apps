@interface AWEFriendRecommendInfo : AWEBaseApiModel
@property (nonatomic) double recommendPredictRate;
@property (nonatomic) double recommendPredictScore;
@property (nonatomic) NSString friendRecommendFrom;
@property (nonatomic) NSString fromAppID;
- (double)recommendPredictRate;
- (void)setRecommendPredictRate:;
- (double)recommendPredictScore;
- (void)setRecommendPredictScore:;
- (id)friendRecommendFrom;
- (void)setFriendRecommendFrom:;
- (id)fromAppID;
- (void)setFromAppID:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

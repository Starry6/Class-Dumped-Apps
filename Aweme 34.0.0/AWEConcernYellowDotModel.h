@interface AWEConcernYellowDotModel : AWEBaseApiModel
@property (nonatomic) AWEConcernLandingFollowTabSettings landingFollowTabSettings;
@property (nonatomic) AWEConcernYellowDotDemotionSetting yellowDotDemotionSettings;
@property (nonatomic) AWEConcernHighFollowSettings highFollowSettings;
- (id)highFollowSettings;
- (id)yellowDotDemotionSettings;
- (id)landingFollowTabSettings;
- (void)setLandingFollowTabSettings:;
- (void)setYellowDotDemotionSettings:;
- (void)setHighFollowSettings:;
- (void).cxx_destruct;
+ (id)landingTabSettingsJSONTransformer;
+ (id)yellowDotDemotionSettingsJSONTransformer;
+ (id)highFollowSettingsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

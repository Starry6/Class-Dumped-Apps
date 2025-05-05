@interface BDUGLuckyPollingSettingsDowngradeModel : BDUGLuckyBDModel
@property (nonatomic) q f2Downgrade;
@property (nonatomic) q feedDowngrade;
@property (nonatomic) q activityDowngrade;
@property (nonatomic) NSDictionary extra;
- (void)setF2Downgrade:;
- (long long)activityDowngrade;
- (long long)f2Downgrade;
- (long long)feedDowngrade;
- (void)setActivityDowngrade:;
- (void)setExtra:;
- (void)setFeedDowngrade:;
- (id)extra;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (id)modelCustomPropertyMapper;
@end

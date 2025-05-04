@interface AWEDemaciaUserModel : AWEBaseApiModel
@property (nonatomic) NSString userID;
@property (nonatomic) q followStatus;
- (long long)followStatus;
- (void)setFollowStatus:;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:;
+ (id)JSONKeyPathsByPropertyKey;
@end

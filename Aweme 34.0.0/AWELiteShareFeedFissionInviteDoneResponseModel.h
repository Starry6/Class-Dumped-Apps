@interface AWELiteShareFeedFissionInviteDoneResponseModel : AWELiteBaseApiModel
@property (nonatomic) q rewardAmount;
@property (nonatomic) NSString rewardType;
@property (nonatomic) NSString toastContent;
@property (nonatomic) NSString activityName;
@property (nonatomic) NSString shareScene;
@property (nonatomic) NSString diversion;
@property (nonatomic) NSString imgDiversion;
@property (nonatomic) q status;
- (long long)rewardAmount;
- (void)setRewardAmount:;
- (void)setRewardType:;
- (id)rewardType;
- (id)toastContent;
- (void)setToastContent:;
- (id)shareScene;
- (void)setShareScene:;
- (id)diversion;
- (void)setDiversion:;
- (id)imgDiversion;
- (void)setImgDiversion:;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
- (id)activityName;
- (void)setActivityName:;
+ (id)JSONKeyPathsByPropertyKey;
@end

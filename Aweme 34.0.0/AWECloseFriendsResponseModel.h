@interface AWECloseFriendsResponseModel : AWEBaseApiModel
@property (nonatomic) q closeFriendsStatus;
@property (nonatomic) q newCloseFriendsStatus;
@property (nonatomic) q followRequestType;
@property (nonatomic) NSArray commitStatusList;
@property (nonatomic) q onBoardingTime;
- (long long)newCloseFriendsStatus;
- (long long)followRequestType;
- (id)commitStatusList;
- (long long)onBoardingTime;
- (long long)closeFriendsStatus;
- (void)setCloseFriendsStatus:;
- (void)setNewCloseFriendsStatus:;
- (void)setFollowRequestType:;
- (void)setCommitStatusList:;
- (void)setOnBoardingTime:;
- (void).cxx_destruct;
+ (id)closeFriendsStatusJSONTransformer;
+ (id)commitStatusListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

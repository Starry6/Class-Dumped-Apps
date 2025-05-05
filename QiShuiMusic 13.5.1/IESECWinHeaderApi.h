@interface IESECWinHeaderApi : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserId;
@property (nonatomic) NSString sceneType;
@property (nonatomic) NSString ec_extra;
@property (nonatomic) NSString passThroughAPI;
@property (nonatomic) q upgradeVersion;
- (id)ec_extra;
- (void)fetchWindowHeaderWithCompletion:metricsBlock:;
- (id)passThroughAPI;
- (id)secUserId;
- (void)setEc_extra:;
- (void)setPassThroughAPI:;
- (void)setSecUserId:;
- (void)setUpgradeVersion:;
- (long long)upgradeVersion;
- (void)windowFollowWithCompletion:;
- (void)windowUnfollowWithCompletion:;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:;
- (id)sceneType;
- (void)setSceneType:;
@end

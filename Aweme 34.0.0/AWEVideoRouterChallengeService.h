@interface AWEVideoRouterChallengeService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createMVVideoWithChallenge:mvID:info:repoMissionModel:commercialAnchorModel:;
- (id)createVideoWithChallenge:fromChallengeDetail:info:commercialAnchorModel:;
- (id)createVideoWithChallenge:duetAweme:fromChallengeDetail:info:commercialAnchorModel:;
- (id)createVideoWithChallenge:poiInfo:music:stickerID:fromChallengeDetail:info:commercialAnchorModel:;
- (id)createVideoWithChallenge:publishViewModel:poiInfo:music:stickerID:fromChallengeDetail:;
- (id)createMVVideoWithChallenge:mvID:info:commercialAnchorModel:;
- (id)dynamicRecorderWithChallenge:poiInfo:music:stickerID:fromChallengeDetail:info:commercialAnchorModel:;
- (id)startWithChallenge:duetAweme:poiInfo:music:stickerID:fromChallengeDetail:info:commercialAnchorModel:;
- (void)prepareInputDataWithChallenge:poiInfo:musicInfo:stickerID:publishModel:fromChallengeDetail:info:completion:;
- (void)prepareInputDataWithChallenge:publishModel:fromChallengeDetail:info:completion:;
@end

@interface AWEVideoRouterTaskService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createVideoWithTask:info:missionModel:commercialAnchorModel:;
- (id)createVideoWithTask:duetAweme:info:missionModel:commercialAnchorModel:isStarAtlas:;
- (id)createVideoWithTask:duetAweme:info:missionModel:commercialAnchorModel:;
- (id)createVideoWithMissionModel:commercialAnchorModel:;
- (id)createVideoWithTask:info:missionModel:commercialAnchorModel:isStarAtlas:;
@end

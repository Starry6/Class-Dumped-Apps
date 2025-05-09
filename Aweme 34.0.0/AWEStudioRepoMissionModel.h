@interface AWEStudioRepoMissionModel : AWEBaseApiModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWETaskModel mission;
@property (nonatomic) NSString missionFrom;
@property (nonatomic) NSString missionID;
@property (nonatomic) NSString missionType;
@property (nonatomic) NSString missionName;
@property (nonatomic) BOOL isAssignmentMission;
@property (nonatomic) BOOL excludeCustomStickerEntrance;
@property (nonatomic) NSDictionary selectedMissionInfo;
@property (nonatomic) NSData taskJson;
@property (nonatomic) NSData challengeJson;
@property (nonatomic) NSString starAtlasExtra;
- (void)setMission:;
- (void)setMissionName:;
- (void)setMissionType:;
- (void)setMissionID:;
- (id)mission;
- (void)setExcludeCustomStickerEntrance:;
- (BOOL)excludeCustomStickerEntrance;
- (id)starAtlasExtra;
- (void)setStarAtlasExtra:;
- (id)missionType;
- (id)missionID;
- (id)missionName;
- (id)missionFrom;
- (void)setMissionFrom:;
- (BOOL)isAssignmentMission;
- (void)setIsAssignmentMission:;
- (id)selectedMissionInfo;
- (void)setSelectedMissionInfo:;
- (id)taskJson;
- (void)setTaskJson:;
- (id)challengeJson;
- (void)setChallengeJson:;
- (id)acc_publishRequestParams:;
- (id)initWithDraft:;
- (void)saveWithDraft:;
- (void)willEnterEditPageFromClipPage:originalPublishModel:;
- (id)acc_referExtraParams;
- (id)acc_mission;
- (id)acc_missionName;
- (id)acc_missionID;
- (id)acc_missionFrom;
- (BOOL)acc_isAssignmentMission;
- (BOOL)acc_excludeCustomStickerEntrance;
- (BOOL)acc_isRecordLiveMission;
- (id)acc_selectedMissionInfo;
- (BOOL)shouldShowMissionItem;
- (void)updateMissionID:missionType:missionName:isAssignmentMission:selectedMissionInfo:;
- (id)acc_publishTrackEventParams:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)missionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

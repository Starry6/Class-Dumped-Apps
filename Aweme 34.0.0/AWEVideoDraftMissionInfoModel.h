@interface AWEVideoDraftMissionInfoModel : NSObject
@property (nonatomic) NSString missionFrom;
@property (nonatomic) NSString missionID;
@property (nonatomic) NSString missionType;
@property (nonatomic) NSString missionName;
@property (nonatomic) NSNumber isAssignmentMission;
- (void)setMissionName:;
- (void)setMissionType:;
- (void)setMissionID:;
- (id)missionType;
- (id)missionID;
- (id)missionName;
- (id)missionFrom;
- (void)setMissionFrom:;
- (id)isAssignmentMission;
- (void)setIsAssignmentMission:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end

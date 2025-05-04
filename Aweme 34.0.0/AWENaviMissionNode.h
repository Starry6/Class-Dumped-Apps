@interface AWENaviMissionNode : MTLModel
@property (nonatomic) NSString missionId;
@property (nonatomic) NSString missionType;
@property (nonatomic) NSString missionName;
@property (nonatomic) NSString missionExtraJson;
@property (nonatomic) NSArray challengNames;
@property (nonatomic) NSArray mentionedUsers;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMissionName:;
- (void)setMissionType:;
- (id)mentionedUsers;
- (void)setMentionedUsers:;
- (id)missionType;
- (id)missionName;
- (id)missionId;
- (void)setChallengNames:;
- (void)setMissionId:;
- (id)missionExtraJson;
- (void)setMissionExtraJson:;
- (id)challengNames;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

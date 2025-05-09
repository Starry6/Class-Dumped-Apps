@interface IESLivePKUser : IESLiveListUser
@property (nonatomic) BattleUserInfo battleInfo;
@property (nonatomic) HTSLiveRoom room;
@property (nonatomic) NSMutableArray userTagsArray;
@property (nonatomic) NSMutableArray roomTagsArray;
@property (nonatomic) BattleLinkerInviteMessageExtra_InviterRivalExtra battleExtra;
@property (nonatomic) NSString recommendReason;
@property (nonatomic) NSString interactScore;
@property (nonatomic) BOOL hasJoinBusinessChannel;
@property (nonatomic) NSNumber pkDuration;
@property (nonatomic) q webcastVersion;
@property (nonatomic) NSString devicePlatform;
- (id)recommendReason;
- (void)setBattleExtra:;
- (id)battleExtra;
- (id)battleInfo;
- (BOOL)hasJoinBusinessChannel;
- (id)interactScore;
- (id)pkDuration;
- (id)roomTagsArray;
- (void)setBattleInfo:;
- (void)setHasJoinBusinessChannel:;
- (void)setInteractScore:;
- (void)setPkDuration:;
- (void)setRecommendReason:;
- (void)setRoomTagsArray:;
- (void)setUserTagsArray:;
- (void)setWebcastVersion:;
- (id)userTagsArray;
- (long long)webcastVersion;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (id)devicePlatform;
- (void)setDevicePlatform:;
@end

@interface HTSLiveLinkMicBizInviteMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger bizType;
@property (nonatomic) NSInteger inviteType;
@property (nonatomic) q inviteUid;
@property (nonatomic) NSString inviteName;
@property (nonatomic) NSMutableArray tagsArray;
@property (nonatomic) Q tagsArray_Count;
@property (nonatomic) IESLiveListUser inviteUser;
@property (nonatomic) BOOL hasInviteUser;
@property (nonatomic) NSString inviteTitle;
@property (nonatomic) NSString inviteSubTitle;
@property (nonatomic) q waitSec;
@property (nonatomic) BizOpenGameInfo bizGameInfo;
@property (nonatomic) BOOL hasBizGameInfo;
@property (nonatomic) IESLiveLinkMicBizExtra battleConfigSetting;
@property (nonatomic) BOOL hasBattleConfigSetting;
@property (nonatomic) IESLiveLinkMicBizExtra linkMicBizExtra;
@property (nonatomic) BOOL hasLinkMicBizExtra;
+ (id)descriptor;
@end

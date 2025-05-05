@interface IESLiveLinkMicAudienceLinkRoomInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) HTSLiveInviteRoomInfo roomInfo;
@property (nonatomic) BOOL hasRoomInfo;
@property (nonatomic) NSInteger inviteStatus;
@property (nonatomic) NSString introductionContent;
+ (id)descriptor;
@end

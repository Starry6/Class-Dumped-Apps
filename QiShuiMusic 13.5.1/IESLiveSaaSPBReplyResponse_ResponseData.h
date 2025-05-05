@interface IESLiveSaaSPBReplyResponse_ResponseData : GPBMessage
@property (nonatomic) NSString accessKey;
@property (nonatomic) q linkMicId;
@property (nonatomic) BOOL joinable;
@property (nonatomic) NSInteger confluenceType;
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) NSString rtcAppId;
@property (nonatomic) NSString rtcAppSign;
@property (nonatomic) q channelId;
@property (nonatomic) NSString inviteOpenId;
@property (nonatomic) NSString inviteeOpenId;
@property (nonatomic) q inviteRoomId;
@property (nonatomic) q inviteeRoomId;
@property (nonatomic) NSInteger linkMicType;
@property (nonatomic) NSInteger matchType;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) q rivalLinkmicId;
@property (nonatomic) NSString rivalLinkmicIdStr;
@property (nonatomic) BOOL bizJoinChannel;
@property (nonatomic) q fromScene;
@property (nonatomic) NSString kickedUsersUniqueId;
@property (nonatomic) NSInteger anchorAuthRole;
@property (nonatomic) q version;
@property (nonatomic) q anchorUiLayout;
@property (nonatomic) NSInteger switchToScene;
@property (nonatomic) q curInviteNum;
+ (id)descriptor;
@end

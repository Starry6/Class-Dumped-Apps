@interface IESLiveSaaSPBHostTeamHostTeamRoomInfo : GPBMessage
@property (nonatomic) q teamId;
@property (nonatomic) NSString teamName;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) IESLiveSaaSPBImage teamIcon;
@property (nonatomic) BOOL hasTeamIcon;
@property (nonatomic) IESLiveSaaSPBImage teamBadge;
@property (nonatomic) BOOL hasTeamBadge;
@property (nonatomic) IESLiveSaaSPBImage teamBackGround;
@property (nonatomic) BOOL hasTeamBackGround;
@property (nonatomic) NSString systemMsg;
@property (nonatomic) NSString teamIdStr;
@property (nonatomic) IESLiveSaaSPBImage teamAvatarBox;
@property (nonatomic) BOOL hasTeamAvatarBox;
+ (id)descriptor;
@end

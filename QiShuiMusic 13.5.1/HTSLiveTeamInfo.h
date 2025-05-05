@interface HTSLiveTeamInfo : IESLivePBBaseMessage
@property (nonatomic) q teamId;
@property (nonatomic) NSString teamName;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) HTSLiveImage teamIcon;
@property (nonatomic) BOOL hasTeamIcon;
@property (nonatomic) HTSLiveImage teamBadge;
@property (nonatomic) BOOL hasTeamBadge;
@property (nonatomic) HTSLiveImage teamBackground;
@property (nonatomic) BOOL hasTeamBackground;
@property (nonatomic) NSString systemMsg;
@property (nonatomic) NSString teamIdStr;
@property (nonatomic) HTSLiveImage teamAvatarBox;
@property (nonatomic) BOOL hasTeamAvatarBox;
+ (id)descriptor;
@end

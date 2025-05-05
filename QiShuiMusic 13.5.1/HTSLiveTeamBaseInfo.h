@interface HTSLiveTeamBaseInfo : IESLivePBBaseMessage
@property (nonatomic) NSString teamName;
@property (nonatomic) HTSLiveImage teamFlagURL;
@property (nonatomic) BOOL hasTeamFlagURL;
@property (nonatomic) NSString teamColor;
@property (nonatomic) q teamId;
@property (nonatomic) NSString teamIdStr;
+ (id)descriptor;
@end

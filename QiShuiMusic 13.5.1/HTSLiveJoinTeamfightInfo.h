@interface HTSLiveJoinTeamfightInfo : IESLivePBBaseMessage
@property (nonatomic) q teamId;
@property (nonatomic) NSString teamIdStr;
+ (id)descriptor;
@end

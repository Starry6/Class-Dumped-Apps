@interface IESLiveLinkMicProfitStartTeamfightResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveLinkmicTeamfightInfo teamfightInfo;
@property (nonatomic) BOOL hasTeamfightInfo;
+ (id)descriptor;
@end

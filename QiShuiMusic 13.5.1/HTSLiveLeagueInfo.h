@interface HTSLiveLeagueInfo : IESLivePBBaseMessage
@property (nonatomic) q leagueId;
@property (nonatomic) NSString cnnName;
@property (nonatomic) NSString ennName;
@property (nonatomic) NSString season;
+ (id)descriptor;
@end

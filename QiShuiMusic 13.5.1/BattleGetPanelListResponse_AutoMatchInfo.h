@interface BattleGetPanelListResponse_AutoMatchInfo : IESLivePBBaseMessage
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) q waitSec;
@property (nonatomic) BOOL hitHighWay;
@property (nonatomic) q accelerateLimit;
@property (nonatomic) BattleGetPanelListResponse_AutoMatchInfoConfig config;
@property (nonatomic) BOOL hasConfig;
@property (nonatomic) q defaultWaitLimit;
+ (id)descriptor;
@end

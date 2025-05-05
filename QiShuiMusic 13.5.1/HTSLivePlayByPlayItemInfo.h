@interface HTSLivePlayByPlayItemInfo : IESLivePBBaseMessage
@property (nonatomic) q timestamp;
@property (nonatomic) q playerId;
@property (nonatomic) q refPlayerId;
@property (nonatomic) NSInteger incidentType;
@property (nonatomic) double elapsed;
@property (nonatomic) double elapsedPlus;
@property (nonatomic) NSString playerName;
@property (nonatomic) NSString refPlayerName;
@property (nonatomic) NSString playerIdStr;
@property (nonatomic) NSString refPlayerIdStr;
@property (nonatomic) q startTimePts;
@property (nonatomic) q endTimePts;
@property (nonatomic) q startTimeSei;
@property (nonatomic) q endTimeSei;
+ (id)descriptor;
@end

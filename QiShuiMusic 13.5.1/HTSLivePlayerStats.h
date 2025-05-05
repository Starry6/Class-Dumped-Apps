@interface HTSLivePlayerStats : IESLivePBBaseMessage
@property (nonatomic) q playerId;
@property (nonatomic) q teamId;
@property (nonatomic) double minutesPlayed;
@property (nonatomic) double goals;
@property (nonatomic) double assists;
@property (nonatomic) double shots;
@property (nonatomic) double shotsOn;
@property (nonatomic) double yCards;
@property (nonatomic) double rCards;
@property (nonatomic) double offsides;
@property (nonatomic) double foulsCommitted;
@property (nonatomic) double ownGoals;
@property (nonatomic) double saves;
@property (nonatomic) double caughtBall;
@property (nonatomic) double cleanSheets;
@property (nonatomic) double pass;
@property (nonatomic) double keyPass;
@property (nonatomic) double passesCompleted;
@property (nonatomic) double steal;
@property (nonatomic) double intercept;
@property (nonatomic) double clearances;
+ (id)descriptor;
@end

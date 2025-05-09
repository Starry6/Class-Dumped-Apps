@interface HTSLiveTeamStats : IESLivePBBaseMessage
@property (nonatomic) q teamId;
@property (nonatomic) double possession;
@property (nonatomic) double shotOn;
@property (nonatomic) double shotOff;
@property (nonatomic) double freeKick;
@property (nonatomic) double corner;
@property (nonatomic) double counter;
@property (nonatomic) double saves;
@property (nonatomic) double offside;
@property (nonatomic) double foulCommit;
@property (nonatomic) double yellowCards;
@property (nonatomic) double redCards;
@property (nonatomic) double pass;
@property (nonatomic) double keyPass;
@property (nonatomic) double passesCompleted;
@property (nonatomic) double steal;
@property (nonatomic) double intercept;
@property (nonatomic) double shots;
@property (nonatomic) double possessionFiveMin;
+ (id)descriptor;
@end

@interface BDUGLuckyTimerConfig : BDUGLuckyJSONModel
@property (nonatomic) NSArray actions;
@property (nonatomic) NSDictionary timerRules;
@property (nonatomic) double expireAt;
@property (nonatomic) double targetTs;
@property (nonatomic) double ackedTs;
@property (nonatomic) double reportIntervalTs;
@property (nonatomic) NSArray millstonesTs;
- (double)ackedTs;
- (double)expireAt;
- (id)millstonesTs;
- (double)reportIntervalTs;
- (void)setAckedTs:;
- (void)setExpireAt:;
- (void)setMillstonesTs:;
- (void)setReportIntervalTs:;
- (void)setTargetTs:;
- (void)setTimerRules:;
- (double)targetTs;
- (id)timerRules;
- (void)setActions:;
- (id)initWithDictionary:error:;
- (id)actions;
- (void).cxx_destruct;
@end

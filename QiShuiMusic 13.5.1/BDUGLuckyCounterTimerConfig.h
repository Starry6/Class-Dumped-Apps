@interface BDUGLuckyCounterTimerConfig : BDUGLuckyJSONModel
@property (nonatomic) double targetTsEachCount;
@property (nonatomic) NSArray actions;
@property (nonatomic) NSDictionary timerRules;
@property (nonatomic) NSArray timerScenes;
@property (nonatomic) NSDictionary timerSceneRules;
- (id)timerSceneRules;
- (void)setTimerScenes:;
- (void)setTargetTsEachCount:;
- (void)setTimerRules:;
- (void)setTimerSceneRules:;
- (double)targetTsEachCount;
- (id)timerRules;
- (id)timerScenes;
- (void)setActions:;
- (id)actions;
- (void).cxx_destruct;
@end

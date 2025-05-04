@interface AWEPerfEvaluateStrategyManager : NSObject
@property (nonatomic) @? scoreGetter;
@property (nonatomic) float lowMiddleJudgeScore;
@property (nonatomic) float middleHighJudgeScore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithConfig:scoreGetter:;
- (long long)getDeviceTypeOnScoreType:;
- (id)scoreGetter;
- (float)lowMiddleJudgeScore;
- (float)middleHighJudgeScore;
- (void)setScoreGetter:;
- (void)setLowMiddleJudgeScore:;
- (void)setMiddleHighJudgeScore:;
- (long long)getDeviceType;
- (void).cxx_destruct;
@end

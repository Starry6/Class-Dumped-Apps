@interface IESLiveMessageHeatConfig : NSObject
@property (nonatomic) NSNumber heatUpThreshold;
@property (nonatomic) NSNumber coolDownThreshold;
@property (nonatomic) double stableTimeDuration;
- (id)heatUpThreshold;
- (id)coolDownThreshold;
- (void)setCoolDownThreshold:;
- (void)setHeatUpThreshold:;
- (void)setStableTimeDuration:;
- (double)stableTimeDuration;
- (id)init;
- (void).cxx_destruct;
@end

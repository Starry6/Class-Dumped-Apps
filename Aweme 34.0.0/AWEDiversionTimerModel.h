@interface AWEDiversionTimerModel : AWEBaseApiModel
@property (nonatomic) q totalTime;
@property (nonatomic) double endTime;
@property (nonatomic) AWEDiversionTimerConfigModel timerConfig;
@property (nonatomic) BOOL finish;
@property (nonatomic) NSString toast;
- (id)timerConfig;
- (void)setTimerConfig:;
- (double)endTime;
- (long long)totalTime;
- (void)setEndTime:;
- (BOOL)finish;
- (void).cxx_destruct;
- (void)setTotalTime:;
- (void)setToast:;
- (id)toast;
- (void)setFinish:;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface ADExecutorParameters : NSObject
@property (nonatomic) NSString intermediatesOutputPath;
@property (nonatomic) ADLogManager logger;
@property (nonatomic) BOOL powerMeasureMode;
@property (nonatomic) q stepsToSkip;
@property (nonatomic) ADTimeProfiler timeProfiler;
- (id)logger;
- (id)init;
- (void)setLogger:;
- (void).cxx_destruct;
- (id)intermediatesOutputPath;
- (void)setIntermediatesOutputPath:;
- (BOOL)powerMeasureMode;
- (void)setPowerMeasureMode:;
- (long long)stepsToSkip;
- (void)setStepsToSkip:;
- (id)timeProfiler;
- (void)setTimeProfiler:;
@end

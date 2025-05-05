@interface MLBackgroundPredictionTask : MLBackgroundTask
@property (nonatomic) NSURL modelURL;
@property (nonatomic) MLModelConfiguration modelConfiguration;
@property (nonatomic) MLPredictionOptions predictionOptions;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)modelURL;
- (void)setModelURL:;
- (void).cxx_destruct;
- (void)setModelConfiguration:;
- (id)modelConfiguration;
- (id)copyWithZone:;
- (id)predictionOptions;
- (void)setPredictionOptions:;
+ (BOOL)supportsSecureCoding;
+ (Class)taskRunnerClass;
@end

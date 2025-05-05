@interface IESLivePrefSampleCpuInfo : NSObject
@property (nonatomic) NSNumber cpu_rate;
@property (nonatomic) NSNumber total_rate;
@property (nonatomic) NSNumber main_thread_usage;
@property (nonatomic) NSNumber threadCount;
@property (nonatomic) NSNumber cost;
@property (nonatomic) NSNumber generateTime;
- (void)setThreadCount:;
- (id)cpu_rate;
- (id)generateTime;
- (id)main_thread_usage;
- (void)setCpu_rate:;
- (void)setGenerateTime:;
- (void)setMain_thread_usage:;
- (void)setTotal_rate:;
- (id)total_rate;
- (id)cost;
- (id)threadCount;
- (void).cxx_destruct;
- (void)setCost:;
@end

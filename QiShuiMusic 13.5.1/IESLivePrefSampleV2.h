@interface IESLivePrefSampleV2 : NSObject
@property (nonatomic) IESLivePerfSampleContext context;
@property (nonatomic) NSMutableArray prefSampleInfos;
@property (nonatomic) q sample_count_audience;
@property (nonatomic) NSObject<OS_dispatch_queue> perfSampleQueue;
- (id)perfSampleQueue;
- (id)prefSampleInfos;
- (void)prefSampleInfo:forceReport:;
- (void)reportPrefSampleInfo:;
- (long long)sample_count_audience;
- (void)setPerfSampleQueue:;
- (void)setPrefSampleInfos:;
- (void)setSample_count_audience:;
- (void)setUp;
- (id)context;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setContext:;
@end

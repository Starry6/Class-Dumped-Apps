@interface IESMMPassthroughExporter : IESMMAVExporter
@property (nonatomic) double previousTranscodeProgress;
@property (nonatomic) double timeOutLastUpdateTime;
@property (nonatomic) NSTimer timer;
@property (nonatomic) @? completeBlock;
@property (nonatomic) @? progressBlock;
@property (nonatomic) double timeOutPeriod;
@property (nonatomic) double progressCheckingPeriod;
- (id)completeBlock;
- (void)exportVideoData:completeBlock:;
- (double)previousTranscodeProgress;
- (double)progressCheckingPeriod;
- (void)setCompleteBlock:;
- (void)setPreviousTranscodeProgress:;
- (void)setProgressCheckingPeriod:;
- (void)setTimeOutLastUpdateTime:;
- (double)timeOutLastUpdateTime;
- (id)progressBlock;
- (id)init;
- (void)setProgressBlock:;
- (void)setTimer:;
- (void).cxx_destruct;
- (void)cleanTimer;
- (id)timer;
- (void)createTimer;
- (void)refreshStatus;
- (double)timeOutPeriod;
- (void)setTimeOutPeriod:;
@end

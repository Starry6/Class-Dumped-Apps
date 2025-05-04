@interface AWEAIGCBusinessScheduleProgress : NSObject
@property (nonatomic) @? progressBlock;
@property (nonatomic) NSTimer timer;
@property (nonatomic) double progress;
@property (nonatomic) BOOL progressFinished;
- (void)scheduledTimer;
- (void)addProgressBlcok:;
- (void)setProgressFinished:;
- (BOOL)progressFinished;
- (void)finished;
- (id)progressBlock;
- (void)setTimer:;
- (id)timer;
- (void)startProgress;
- (double)progress;
- (void)setProgressBlock:;
- (void).cxx_destruct;
- (void)setProgress:;
@end

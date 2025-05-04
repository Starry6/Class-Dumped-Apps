@interface AWECountDownTask : NSObject
@property (nonatomic) Q stage;
@property (nonatomic) Q timeLength;
@property (nonatomic) NSTimer taskTimer;
- (void)dealloc;
- (id)taskTimer;
- (void)setTaskTimer:;
- (void)startTaskTimer;
- (void)pauseTaskTimer;
- (void)resumeTaskTimer;
- (void)resetTaskTimer;
- (void)startTaskIfNeed;
- (void)pauseTaskIfNeed;
- (void)resumeTaskIfNeed;
- (void)stopTaskIfNeed;
- (void)configTaskWithTimeLength:;
- (unsigned long long)timeLength;
- (void)setTimeLength:;
- (void)taskFire;
- (id)initWithTaskLength:;
- (void)setStage:;
- (unsigned long long)stage;
- (void).cxx_destruct;
- (void)reset;
@end

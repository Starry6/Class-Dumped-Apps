@interface AWEStudioComposerTaskManager : NSObject
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL running;
@property (nonatomic) @? completion;
@property (nonatomic) @? taskWillStart;
@property (nonatomic) @? taskDidStop;
- (id)taskDidStop;
- (void)startWithTasks:completion:;
- (void)setTaskWillStart:;
- (void)setTaskDidStop:;
- (void)manuallyCancel;
- (void)p_callbackWithError:;
- (id)taskWillStart;
- (void)setRunning:;
- (BOOL)running;
- (id)completion;
- (void)setCompletion:;
- (void)execute:;
- (BOOL)started;
- (void).cxx_destruct;
- (void)setStarted:;
@end

@interface APBReactor : NSObject
@property (nonatomic) q currentTaskIndex;
@property (nonatomic) @? rcb;
@property (nonatomic) APBEventListener eventListener;
@property (nonatomic) APBResponse response;
@property (nonatomic) NSArray tasks;
@property (nonatomic) NSDictionary globalConfig;
@property (nonatomic) NSDictionary taskConfig;
@property (nonatomic) NSMutableArray parallelTasks;
@property (nonatomic) NSTimer globalTimer;
@property (nonatomic) NSTimer taskTimer;
@property (nonatomic) <IBioAuthFactor> factor;
@property (nonatomic) <IBioAuthTask> currentTask;
@property (nonatomic) NSMutableDictionary currentPipeInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentPipeInfo;
- (void)setGlobalTimer:;
- (void)_addGlobalTimer;
- (void)eventTriggered:;
- (id)rcb;
- (void)setRcb:;
- (void)_addKVOObserver:;
- (void)_addTaskTimer;
- (BOOL)_object:responseToSelector:;
- (void)_removeAllKVObserver:;
- (void)_removeKVObserver:;
- (void)_resetAllTask:forceOnMainThread:;
- (void)_resetTask:forceOnMainThread:;
- (long long)currentTaskIndex;
- (id)eventByType:parm:;
- (void)exec:withCompletionCallback:;
- (void)execBackwardCommand:;
- (id)globalConfig;
- (id)globalTimer;
- (void)internalExit;
- (BOOL)observerKeyPath:observer:observercance:;
- (void)onGlobalTimer:;
- (void)onTaskTimer:;
- (id)parallelTasks;
- (void)processParallelStateChange:withObject:;
- (void)processStateChange:;
- (void)runTask:withPipeInfo:;
- (void)runWithGlobalConfig:withResponseCallback:;
- (void)setCurrentPipeInfo:;
- (void)setCurrentTaskIndex:;
- (void)setGlobalConfig:;
- (void)setParallelTasks:;
- (void)setTaskConfig:;
- (void)setTaskTimer:;
- (id)taskConfig;
- (id)taskTimer;
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)setFactor:;
- (id)response;
- (void).cxx_destruct;
- (void)_setUp;
- (id)factor;
- (id)currentTask;
- (void)setResponse:;
- (void)setCurrentTask:;
- (id)tasks;
- (void)setTasks:;
- (void)setTaskList:;
- (id)eventListener;
- (void)setEventListener:;
@end

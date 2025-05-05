@interface TTVideoEnginePool : NSObject
@property (nonatomic) q corePoolSizeUpperLimit;
- (void)givebackEngine:;
- (id)_popEngineFromPool;
- (void)_resetAndGivebackToPoolAsync:;
- (long long)corePoolSizeUpperLimit;
- (void)crossTalkCheck;
- (void)engine:stateChange:;
- (void)engineAsyncCloseDone:;
- (id)getEngine;
- (id)getEngineInfoWithVID:;
- (id)getEngineWithOwnPlayer:;
- (id)getEngineWithType:;
- (id)getEngineWithType:async:;
- (id)getExistingEnginesInfos;
- (void)livePlayerStateChange:;
- (void)releaseCoreEngines;
- (void)setCorePoolSizeUpperLimit:;
- (void)startObserve:engine:;
- (void)stopObserve:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)instance;
@end

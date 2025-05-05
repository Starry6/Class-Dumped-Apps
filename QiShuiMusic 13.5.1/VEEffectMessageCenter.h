@interface VEEffectMessageCenter : NSObject
@property (nonatomic) ^v effectMgr;
@property (nonatomic) NSMutableArray observerRefs;
- (id)effectMgr;
- (id)observerRefs;
- (BOOL)p_handleEffectMessageWithID:arg1:arg2:arg3:;
- (void)p_lockForRW:;
- (void)setEffectMgr:;
- (void)setObserverRefs:;
- (void)removeObserver:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)registerObserver:;
+ (id)defaultCenter;
@end

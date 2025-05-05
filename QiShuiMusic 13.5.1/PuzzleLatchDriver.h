@interface PuzzleLatchDriver : NSObject
@property (nonatomic) NSMapTable latchContainers;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)latchContainers;
- (void)evaluatePrefetch:;
- (void)getContextWithLatchID:completion:;
- (void)injectLynxViewWithBuilder:context:business:url:;
- (void)p_cleanOverdueContainer;
- (BOOL)preattachLynxContainer:forContext:;
- (void)setLatchContainers:;
- (void)setLatchIDForContext:withUrl:;
- (void)setLatchIDForLynxView:withContext:;
- (void)stopEvaluateIfNeeded:;
- (id)init;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
+ (void)loadSwizzled;
+ (id)providePuzzleLatchDriverProtocol:;
+ (id)sharedDriver;
@end

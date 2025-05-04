@interface AWELiveElementPriorityManager : NSObject
@property (nonatomic) <AWELivePreStreamBizStatusService> bizStatusService;
@property (nonatomic) NSHashTable showElements;
@property (nonatomic) ^{__CFRunLoopObserver=} runloopObserver;
@property (nonatomic) <AWELivePriorityElementProtocol> excludeElement;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)attachElement:;
- (id)showElements;
- (void)setShowElements:;
- (BOOL)handlePriorityWithElement:;
- (id)excludeElement;
- (BOOL)excludeElementCouldShow:;
- (void)setExcludeElement:;
- (id)bizStatusService;
- (void)p_scheduleReloadElementsIfNeeded;
- (void)handlePriorityElements;
- (void)p_cleanRunloopObserverIfNeeded;
- (void)setRunloopObserver:;
- (void)didReceiveBizStatusChanged:oldBizStatus:;
- (void)setBizStatusService:;
- (id)runloopObserver;
- (id)initWithService:;
- (void).cxx_destruct;
- (void)removeElement:;
@end

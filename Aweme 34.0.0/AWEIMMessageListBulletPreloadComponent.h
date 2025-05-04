@interface AWEIMMessageListBulletPreloadComponent : AWEIMComponentBase
@property (nonatomic) <IESIMBulletContainerManagerProtocol> bulletContainerManager;
@property (nonatomic) <IESIMBulletPerformanceTrackerInterface> performanceTracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (id)bulletContainerManager;
- (void)beforeAsync_didFetchMsgWithMessageGroupArray:hasMore:direction:shouldAutoLoadMore:isFirstLoad:;
- (void)setPerformanceTracker:;
- (id)performanceTracker;
- (BOOL)p_shouldSyncMainThreadWithScene:;
- (BOOL)tryPreloadBulletCardWithContext:;
- (void)setBulletContainerManager:;
- (void)p_tryPreloadBulletCardWithScene:messageGroupArray:direction:;
- (void)p_tryPreloadBulletCardWithMessageGroupArray:hasMore:direction:shouldAutoLoadMore:isFirstLoad:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end

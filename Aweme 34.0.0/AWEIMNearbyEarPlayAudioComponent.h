@interface AWEIMNearbyEarPlayAudioComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)didReceiveNewMessage:reason:;
- (void)hostVC_viewWillDisappear;
- (void)didFetchMsgWithMessageGroupArray:hasMore:direction:shouldAutoLoadMore:isFirstLoad:;
- (void)handleAudioDidEndPlayNotification:;
- (void)p_switchProximityMonitor:;
+ (BOOL)canCreateComponentWithContext:;
@end

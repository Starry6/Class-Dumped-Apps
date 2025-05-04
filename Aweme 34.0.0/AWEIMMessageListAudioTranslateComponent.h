@interface AWEIMMessageListAudioTranslateComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageListDataInterface> dataService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dataService;
- (void)componentDidMounted:;
- (void)didReceiveNewMessage:reason:;
- (void)hostVC_viewWillDisappear;
- (void)setDataService:;
- (void)beforeAsync_didFetchMsgWithMessageGroupArray:hasMore:direction:shouldAutoLoadMore:isFirstLoad:;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end

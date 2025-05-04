@interface AWEIMScreenShotComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageTableViewInterface> tableViewService;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) BOOL isOnScreen;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)p_onUserDidTakeScreenshot;
- (void)setTableViewService:;
- (id)tableViewService;
- (BOOL)p_isShowWatchOnceMessageDetail:;
- (void)p_sendScreenShotNoticeMessage;
- (id)p_getScreenShotNoticeKey;
- (BOOL)isOnScreen;
- (void).cxx_destruct;
- (void)setIsOnScreen:;
- (id)conversation;
- (void)setConversation:;
@end

@interface IESLiveInnerSmallWindowFragment : IESLiveRoomComponent
@property (nonatomic) <IESLiveSaaSFeedDrawerProvider> feedDrawerProvider;
@property (nonatomic) RACDisposable methodDisposable;
@property (nonatomic) <IESLiveSmallWindowService> smallWindowService;
@property (nonatomic) UIViewController audienceVC;
@property (nonatomic) BOOL outManage;
@property (nonatomic) @? muteStateAction;
@property (nonatomic) @ lastNaviDelegate;
@property (nonatomic) BOOL disableSmallWindow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)p_enableStoreVC;
- (id)muteStateAction;
- (id)audienceVC;
- (void)backToRoom;
- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)didCloseMultiAudioLinkMic;
- (void)didEnterSupportSmallWindowVC:from:;
- (void)didLeaveSupportSmallWindowVC:;
- (void)didSetAttachingDIContext;
- (void)didStartMultiAudioLinkMic;
- (id)feedDrawerProvider;
- (BOOL)isDisableSmallWindow;
- (id)lastNaviDelegate;
- (id)methodDisposable;
- (BOOL)outManage;
- (void)setAudienceVC:;
- (void)setDisableSmallWindow:;
- (void)setFeedDrawerProvider:;
- (void)setLastNaviDelegate:;
- (void)setMethodDisposable:;
- (void)setMuteStateAction:;
- (void)setOutManage:;
- (void)setSmallWindowService:;
- (void)smallWindowDidClear;
- (void)smallWindowDidTap;
- (id)smallWindowService;
- (void)smallWindowTrackWithEvent:extraParam:fromPage:;
- (void)trackWithEvent:extraParam:eventContext:;
- (BOOL)vcIsLive:;
- (void)willEnterSupportSmallWindowVC:;
- (void)willLeaveSupportSmallWindowVC:;
- (void)dealloc;
- (void)navigationController:didShowViewController:animated:;
- (void)navigationController:willShowViewController:animated:;
- (void).cxx_destruct;
+ (id)componentWithRoom:trackContext:componentContext:;
@end

@interface AWEIMMessageTopLoadingComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageListLayoutInterface> layoutService;
@property (nonatomic) AWEIMMessageTopLoadingView loadingView;
@property (nonatomic) q status;
@property (nonatomic) NSTimer timeoutTimer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)viewWillAnimateAlongsideTransitionToSizeWith:;
- (void)p_showLoadingView;
- (id)layoutService;
- (void)setLayoutService:;
- (void)p_dismissLoadingView;
- (void)handleRecentLinkRequestStart:;
- (void)handleRecentLinkRequestEnd:;
- (void)p_timeoutResetStatus;
- (void)handleConvLinkStart:;
- (void)handleConvLinkEnd:;
- (id)p_logInfo;
- (void)p_delayShowLoadingViewIfNeeded;
- (id)createLoadingViewIfNeeded;
- (void)dealloc;
- (void)setStatus:;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
- (long long)status;
- (id)timeoutTimer;
- (void)setTimeoutTimer:;
+ (BOOL)canCreateComponentWithContext:;
@end

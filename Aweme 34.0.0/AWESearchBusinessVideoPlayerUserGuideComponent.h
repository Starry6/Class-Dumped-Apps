@interface AWESearchBusinessVideoPlayerUserGuideComponent : AWESearchComponent
@property (nonatomic) UIView<AWESearchUserGuideViewProtocol> guideView;
@property (nonatomic) NSMutableArray receiveProtocolArray;
@property (nonatomic) AWESearchEventDispather eventDispather;
@property (nonatomic) <AWESearchContainerProtocol> containerContext;
@property (nonatomic) <AWESearchComponentProtocol> componentContext;
@property (nonatomic) NSDictionary dictLogExtraInfo;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) BOOL hidden;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didBecomeActiveForReason:;
- (void)registerSearchUserGuide;
- (void)componentViewWillDisappear:;
- (id)receiveProtocolList;
- (id)receiveProtocolArray;
- (void)setReceiveProtocolArray:;
- (id)p_context;
- (void)interactorDidClick;
- (void)playStatusButtonDidClick;
- (id)p_componentContext;
- (void).cxx_destruct;
- (id)guideView;
- (void)setGuideView:;
+ (BOOL)shouldShowUserGuideViewInFlow;
+ (BOOL)shouldShowUserGuide;
@end

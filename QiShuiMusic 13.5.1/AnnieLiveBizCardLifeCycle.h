@interface AnnieLiveBizCardLifeCycle : NSObject
@property (nonatomic) UIView<IESHYHybridViewProtocol> cardKitViewProxy;
@property (nonatomic) <IESHYHybridViewLifecycleProtocol> puzzleDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didFinishLoadWithURL:;
- (void)containerDidConstructJSRuntime:;
- (id)cardKitViewProxy;
- (void)container:didChangeIntrinsicContentSize:;
- (void)container:didLoadFailedWithUrl:error:;
- (void)container:didRecieveError:;
- (BOOL)container:shouldStartLoadWithRequest:navigationType:;
- (void)containerDidCreated:view:;
- (void)containerDidFirstScreen:;
- (void)containerDidPageUpdate:;
- (void)containerDidStartLoading:;
- (void)containerDidUpdate:;
- (void)containerWillCreated:view:;
- (void)containerWillDestory:;
- (id)puzzleDelegate;
- (void)setCardKitViewProxy:;
- (void)setPuzzleDelegate:;
- (void).cxx_destruct;
- (id)initWithDelegate:;
@end

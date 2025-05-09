@interface AWEPostPageReeditLoadingHandler : NSObject
@property (nonatomic) IESContainer serviceContainer;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) <AWEPostPageContext> context;
@property (nonatomic) AWEPublishBaseTask task;
@property (nonatomic) <ACCProcessViewProtcol> loadingView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEBinding didPublishSignal;
- (void)task:didBeginWithInfo:;
- (void)task:didWholeEndWithResult:error:;
- (void)task:progressDidChangeWithInfo:;
- (void)setServiceContainer:;
- (void)bindServices:;
- (id)didPublishSignal;
- (void)setTask:;
- (id)serviceContainer;
- (void)dealloc;
- (void)startLoading;
- (void)setLoadingView:;
- (id)task;
- (id)loadingView;
- (id)viewController;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setViewController:;
@end

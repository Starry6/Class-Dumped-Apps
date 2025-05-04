@interface AWEListenFeedInteractionBaseElement : NSObject
@property (nonatomic) UIViewController<AWEListenFeedInteractionContainerProtocol><AWEListenFeedInteractionViewControllerProtocol><AWEListenFeedPlayControlViewDelegate> container;
@property (nonatomic) AWEListenFeedInteractionContext interactionContext;
@property (nonatomic) UIView view;
@property (nonatomic) BOOL enableOptimizeUI;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (BOOL)enableOptimizeUI;
- (void)setEnableOptimizeUI:;
- (void)setContainer:;
- (id)container;
- (long long)index;
- (void)dealloc;
- (id)view;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setView:;
- (void).cxx_destruct;
- (id)context;
- (id)playerViewController;
- (id)interactionContext;
- (void)setInteractionContext:;
@end

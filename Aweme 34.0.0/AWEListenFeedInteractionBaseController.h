@interface AWEListenFeedInteractionBaseController : NSObject
@property (nonatomic) UIViewController<AWEListenFeedInteractionContainerProtocol><AWEListenFeedInteractionViewControllerProtocol> container;
@property (nonatomic) AWEListenFeedInteractionContext interactionContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setContainer:;
- (id)container;
- (long long)index;
- (void)dealloc;
- (id)view;
- (id)viewModel;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)context;
- (id)playerViewController;
- (id)interactionContext;
- (void)setInteractionContext:;
@end

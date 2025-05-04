@interface AWEDitoNavBarStatusExtension : NSObject
@property (nonatomic) NSMutableSet nodeTagSet;
@property (nonatomic) NSMutableSet callbackSet;
@property (nonatomic) DitoPageContext context;
@property (nonatomic) <DitoExtensionContainerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)nodeTagSet;
- (void)setNodeTagSet:;
- (void)didReceiveNaviBarStatusDidChange:;
- (void)didReceiveOpenKeepInSyncWithNaviBarStatus:;
- (void)tryInvokeAllCallbackWithParams:;
- (id)callbackSet;
- (void)setCallbackSet:;
- (void)setContainer:;
- (id)container;
- (id)init;
- (void)viewDidLoad;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end

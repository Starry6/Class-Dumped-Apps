@interface AWEPOIPageLogExtension : NSObject
@property (nonatomic) DitoPageContext context;
@property (nonatomic) <DitoExtensionContainerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithRouterParamDict:;
- (id)getParams;
- (void)viewDidEnterBackground;
- (void)viewDidEnterForeground;
- (void)setContainer:;
- (id)container;
- (void)dealloc;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end

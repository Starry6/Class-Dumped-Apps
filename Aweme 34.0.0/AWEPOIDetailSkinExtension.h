@interface AWEPOIDetailSkinExtension : NSObject
@property (nonatomic) DitoPageContext context;
@property (nonatomic) <DitoExtensionContainerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didEndRequestWithResponse:error:;
- (id)fontsToRegister;
- (void)loadFontsIfNeeded;
- (void)setContainer:;
- (id)container;
- (void)viewDidLoad;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end

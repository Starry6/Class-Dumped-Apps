@interface AWEGDLoadingExtension : NSObject
@property (nonatomic) BOOL isEndRequest;
@property (nonatomic) AWEPOILoadingView loadingView;
@property (nonatomic) DitoPageContext context;
@property (nonatomic) <DitoExtensionContainerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeLoadingView;
- (void)didEndRequestWithResponse:error:;
- (void)initializeExtension;
- (BOOL)isBodyStartLoad;
- (void)setIsEndRequest:;
- (BOOL)isEndRequest;
- (void)setContainer:;
- (id)container;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)loadingView;
- (void)setContext:;
- (void).cxx_destruct;
- (void)didLayout;
- (id)context;
- (void)addLoadingView;
@end

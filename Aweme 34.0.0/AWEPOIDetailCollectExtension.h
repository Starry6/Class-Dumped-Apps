@interface AWEPOIDetailCollectExtension : NSObject
@property (nonatomic) BOOL isRequestComponent;
@property (nonatomic) BOOL isShowFollow;
@property (nonatomic) DitoAction requestAction;
@property (nonatomic) DitoPageContext context;
@property (nonatomic) <DitoExtensionContainerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindActionAndState;
- (void)initializeExtension;
- (id)constData;
- (BOOL)isShowFollow;
- (id)detailPageContext;
- (void)setIsShowFollow:;
- (void)requestDitoForCollectWithCollectCount;
- (BOOL)isRequestComponent;
- (void)setIsRequestComponent:;
- (void)setContainer:;
- (id)container;
- (id)init;
- (void)viewWillAppear;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)requestAction;
- (void)setRequestAction:;
@end

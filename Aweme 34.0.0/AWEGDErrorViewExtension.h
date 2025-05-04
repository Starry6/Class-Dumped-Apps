@interface AWEGDErrorViewExtension : NSObject
@property (nonatomic) AWEPOICubeView errorView;
@property (nonatomic) NSInteger retry;
@property (nonatomic) DitoPageContext context;
@property (nonatomic) <DitoExtensionContainerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeExtension;
- (void)loadErrorType:error:;
- (void)addErrorViewWithParams:;
- (BOOL)isBodyStartLoad;
- (id)lynxContainerViewWithErrorDict:context:;
- (void)setContainer:;
- (id)container;
- (void)setContext:;
- (void).cxx_destruct;
- (void)didLayout;
- (id)context;
- (int)retry;
- (void)setRetry:;
- (id)errorView;
- (void)setErrorView:;
- (void)removeErrorView;
@end

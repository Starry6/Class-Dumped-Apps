@interface AWEDitoVirtualRefreshPageExtension : NSObject
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) AWEDitoVirtualRefreshPageTask task;
@property (nonatomic) BOOL didBindMainDataFlag;
@property (nonatomic) BOOL didPostLoadCompleteEvent;
@property (nonatomic) <AWEDitoVirtualRefreshPageInterceptor> interceptor;
@property (nonatomic) DitoPageContext context;
@property (nonatomic) <DitoExtensionContainerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)interceptor;
- (void)didEndReload;
- (void)didBindMainData;
- (void)initializeExtension;
- (void)virtualRefreshPageWithActionContext:;
- (void)pageLoadFailureWithError:;
- (void)setDidBindMainDataFlag:;
- (BOOL)didBindMainDataFlag;
- (BOOL)didPostLoadCompleteEvent;
- (void)setDidPostLoadCompleteEvent:;
- (void)trackWithCode:msg:data:;
- (void)tryShowLoadingView;
- (void)didRefreshPage;
- (void)removeTask;
- (void)tryHideLoadingView;
- (void)setContainer:;
- (id)container;
- (void)setTask:;
- (id)init;
- (void)dealloc;
- (void)setLoadingView:;
- (id)task;
- (id)loadingView;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)cancelTask;
@end

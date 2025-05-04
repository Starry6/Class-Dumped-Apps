@interface AWEMVChannelFastLoadMoreController : AWEMVChannelBaseController
@property (nonatomic) AWEMVChannelPreloadManager preloadManager;
@property (nonatomic) AWEMVChannelPageContext mvContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)preloadManager;
- (void)setPreloadManager:;
- (id)mvContext;
- (void)setMvContext:;
- (void)willFilterResponse:context:;
- (BOOL)autoAttachToDataController:;
- (void)refreshCompletionWithResponse:error:;
- (void)loadMoreAnimationBegin;
- (void)trackLoadMoreWithBuffer:;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end

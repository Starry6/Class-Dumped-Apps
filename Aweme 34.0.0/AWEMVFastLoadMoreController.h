@interface AWEMVFastLoadMoreController : AWEDCFeedBaseController
@property (nonatomic) AWEMVChannelPreloadManager preloadManager;
@property (nonatomic) AWEMVChannelPageContext bizContext;
@property (nonatomic) AWEMVChannelPageContext mvContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onFetchListDataEndWithReason:response:error:;
- (void)onLoadMoreListDataStartWithReason:;
- (id)bizContext;
- (id)preloadManager;
- (void)setPreloadManager:;
- (id)mvContext;
- (void)setMvContext:;
- (void)willFilterResponse:context:;
- (BOOL)autoAttachToDataController:;
- (void)trackLoadMoreWithBuffer:;
- (void).cxx_destruct;
@end

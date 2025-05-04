@interface AWEMVLandscapeInnerCacheController : AWEDCFeedBaseController
@property (nonatomic) AWEMVChannelPageContext mvContext;
- (void)onLoadMoreListDataEndWithReason:response:error:;
- (id)mvContext;
@end

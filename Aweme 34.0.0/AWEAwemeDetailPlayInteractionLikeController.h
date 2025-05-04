@interface AWEAwemeDetailPlayInteractionLikeController : AWEAwemeNewDetailBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initialFetchCompletion:error:;
- (void)loadMoreCompletion:error:isFooterRefreshing:;
- (void)loadPreviousCompletion:error:isHeaderRefreshing:;
- (void)loadMoreCompletionWithData:;
- (void)loadResourceWithList:triggerBy:;
@end

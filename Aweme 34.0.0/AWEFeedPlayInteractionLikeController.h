@interface AWEFeedPlayInteractionLikeController : AWEBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)refreshCompletion:error:needAnimation:;
- (void)initialFetchCompletion:error:;
- (void)loadMoreCompletion:error:isFooterRefreshing:;
- (void)loadResourceWithList:triggerBy:;
@end

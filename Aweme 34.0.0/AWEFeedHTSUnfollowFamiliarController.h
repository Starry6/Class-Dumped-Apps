@interface AWEFeedHTSUnfollowFamiliarController : AWEBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didReceiveFollowUserResponse:context:error:;
- (void)refreshCompletion:error:needAnimation:;
- (void)initialFetchCompletion:error:;
- (void)loadMoreCompletion:error:isFooterRefreshing:;
- (id)aAWEFeedInsertUnfollowFamiliarDataDOUYINHTSAdapter;
- (void)tryInsertVideoWithResponse:context:error:;
- (id)init;
- (void)dealloc;
+ (Class)aAWEFeedInsertUnfollowFamiliarDataDOUYINHTSAdapterClass;
@end

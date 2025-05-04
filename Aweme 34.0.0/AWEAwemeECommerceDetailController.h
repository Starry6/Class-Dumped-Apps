@interface AWEAwemeECommerceDetailController : AWEAwemeNewDetailBaseController
@property (nonatomic) q searchSlideCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithRouterParamDict:;
- (void)initialDataSourceFetchDidFinished;
- (long long)searchSlideCount;
- (void)setSearchSlideCount:;
- (BOOL)isFollowPage;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
@end

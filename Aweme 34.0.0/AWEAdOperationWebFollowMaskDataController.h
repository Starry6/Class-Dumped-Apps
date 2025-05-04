@interface AWEAdOperationWebFollowMaskDataController : AWEListDataController
@property (nonatomic) NSString userID;
@property (nonatomic) NSArray postAwemeList;
- (void)initFetchWithCompletion:;
- (void)loadMoreWithFilteredCompletion:;
- (void)followStatusChanged:;
- (void)setPostAwemeList:;
- (id)postAwemeList;
- (id)initWithUserID:;
- (id)userID;
- (id)requestURL;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setUserID:;
- (void)refresh:;
@end

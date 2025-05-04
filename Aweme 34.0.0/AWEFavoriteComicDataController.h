@interface AWEFavoriteComicDataController : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) AWEUserModel user;
- (void)loadMoreWithCompletion:;
- (void)novelNetworkRequestWithCompletion:firstRequest:;
- (id)cursor;
- (id)user;
- (void)setUser:;
- (id)init;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end

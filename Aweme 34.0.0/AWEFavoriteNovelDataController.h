@interface AWEFavoriteNovelDataController : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSString novelSDKSchema;
@property (nonatomic) AWEUserModel user;
- (void)loadMoreWithCompletion:;
- (void)novelNetworkRequestWithCompletion:firstRequest:;
- (id)novelSDKSchema;
- (void)setNovelSDKSchema:;
- (id)cursor;
- (id)user;
- (void)setUser:;
- (id)init;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
+ (BOOL)isEnableEnterNovelChannel;
+ (void)removeBookFromShelfWithBookId:bookType:completion:;
@end

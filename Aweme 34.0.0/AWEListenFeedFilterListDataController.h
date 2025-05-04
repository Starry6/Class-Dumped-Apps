@interface AWEListenFeedFilterListDataController : AWEListDataController
@property (nonatomic) NSString scene;
@property (nonatomic) q offset;
@property (nonatomic) q count;
- (void)loadMoreWithCompletion:;
- (void)setScene:;
- (id)init;
- (void)setCount:;
- (void)setOffset:;
- (id)scene;
- (long long)offset;
- (long long)count;
- (void).cxx_destruct;
- (id)initWithScene:;
@end

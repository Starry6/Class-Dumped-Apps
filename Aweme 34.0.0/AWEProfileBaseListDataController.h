@interface AWEProfileBaseListDataController : AWEListDataController
@property (nonatomic) NSMutableDictionary completionDict;
@property (nonatomic) BOOL isLoadMoreRequestOnAir;
@property (nonatomic) BOOL isRequestOnAir;
- (void)loadMoreWithCompletion:;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (void)setCompletionDict:;
- (void)loadMoreWithSceneType:completion:;
- (id)completionDict;
- (BOOL)isLoadMoreRequestOnAir;
- (void)setIsLoadMoreRequestOnAir:;
- (void)loadMoreBizRequestWithCompletion:;
- (id)init;
- (void).cxx_destruct;
@end

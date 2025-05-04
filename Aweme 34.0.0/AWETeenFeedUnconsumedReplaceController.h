@interface AWETeenFeedUnconsumedReplaceController : AWETeenFeedBaseController
@property (nonatomic) q maxReachedIndex;
@property (nonatomic) BOOL isRefresh;
- (long long)maxReachedIndex;
- (void)setMaxReachedIndex:;
- (void)beginRequestDataFromRefresh:;
- (void)endRequestDataSuccess:error:fromRefresh:;
- (id)init;
- (BOOL)isRefresh;
- (void)scrollViewDidScroll:;
- (void)setIsRefresh:;
@end

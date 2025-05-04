@interface AWELearningImpl.LearningTabDataController : AWEListDataController
- (void)loadMoreWithCompletion:;
- (void)didReceiveJSON:;
- (void)chunkRequestDidEndWithCommonResponse:withError:forceCanceled:;
- (void)initFetchWithCompletion:;
- (id)init;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end

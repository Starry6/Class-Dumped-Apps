@interface AWEKnowledgeSwiftImpl.HangoutDataController : NSObject
- (void)fetchDataWithRequestParams:args:completion:;
- (void)refreshDataWithRequestParams:args:completion:;
- (void)refreshDataWithRequestParams:useUnconsumedVideos:unconsumedVideos:args:completion:;
- (void)loadMoreDataWithRequestParams:args:completion:;
- (void)cancelRequestTask;
- (id)init;
- (void).cxx_destruct;
@end

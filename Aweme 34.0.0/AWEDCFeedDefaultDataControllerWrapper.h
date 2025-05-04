@interface AWEDCFeedDefaultDataControllerWrapper : NSObject
@property (nonatomic) AWEListDataController dataController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchDataWithRequestParams:args:completion:;
- (void)refreshDataWithRequestParams:args:completion:;
- (void)refreshDataWithRequestParams:useUnconsumedVideos:unconsumedVideos:args:completion:;
- (void)loadMoreDataWithRequestParams:args:completion:;
- (void)cancelRequestTask;
- (void)setDataController:;
- (id)chunkDataController;
- (void)fetchChunkDataWithRequestParams:args:completion:chunkCompletion:;
- (void)loadMoreChunkDataWithRequestParams:args:completion:chunkCompletion:;
- (void)refreshChunkDataWithRequestParams:args:completion:chunkCompletion:;
- (void).cxx_destruct;
- (id)dataController;
@end

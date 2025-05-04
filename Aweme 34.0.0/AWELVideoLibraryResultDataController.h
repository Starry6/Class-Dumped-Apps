@interface AWELVideoLibraryResultDataController : AWEBaseDataController
@property (nonatomic) <AWEHttpTask> currentRequest;
@property (nonatomic) AWELVideoLibraryResultRequestModel requestModel;
@property (nonatomic) AWELVideoLibraryResultResponseModel resultData;
@property (nonatomic) BOOL isOnFeedSharePanel;
- (void)setRequestModel:;
- (void)refreshDataWithCompletion:;
- (void)fetchWithCompletion:fetchType:;
- (BOOL)isOnFeedSharePanel;
- (void)setIsOnFeedSharePanel:;
- (void)requestWithMaxRetryTimes:completion:;
- (void)loadmoreDataWithCompletion:;
- (id)requestModel;
- (id)currentRequest;
- (void).cxx_destruct;
- (id)resultData;
- (void)setCurrentRequest:;
- (void)setResultData:;
@end

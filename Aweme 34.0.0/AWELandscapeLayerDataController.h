@interface AWELandscapeLayerDataController : AWEBaseDataController
@property (nonatomic) <AWEHttpTask> currentTask;
- (id)fetchDataWithUserID:cursor:requestType:forwardCount:reverseCount:isPreload:itemType:xiGuaUserId:completion:;
- (id)filteredModelWithResponseModel:;
- (id)currentTask;
- (void)setCurrentTask:;
- (void).cxx_destruct;
@end

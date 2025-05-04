@interface AWELandscapeRelatedDataController : AWEListDataController
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber requestCount;
@property (nonatomic) <AWEHttpTask> currentTask;
@property (nonatomic) NSString relatedItemID;
- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (id)refreshWithModel:params:completion:;
- (id)fetchWithModel:params:completion:;
- (id)filteredModelWithModelList:;
- (id)relatedItemID;
- (void)setRelatedItemID:;
- (void)setRequestCount:;
- (id)requestCount;
- (id)currentTask;
- (void)setCurrentTask:;
- (void).cxx_destruct;
@end

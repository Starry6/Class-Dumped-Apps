@interface AWEPadFeedDrawerDataController : AWEListDataController
@property (nonatomic) q requestNums;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) AWEMVChannelInflowRequestModel inflowRequestModel;
@property (nonatomic) AWEMVChannelPageContext context;
- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (long long)requestNums;
- (void)setRequestNums:;
- (void)_requestAwemeItemsWithURLString:params:timeout:usePbForRecommendFeed:completionBlock:;
- (void)fetchAuthorListWithCompletion:fetchType:;
- (id)inflowRequestModel;
- (void)setInflowRequestModel:;
- (void)refreshAuthorListWithCompletion:;
- (void)_requestAwemeItemWithParams:path:completion:;
- (id)urlStringWithRequestParams:fetchType:;
- (void)_requestAwemeItemWithCount:minCursor:maxCursor:pullType:extParams:path:completion:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)reset;
- (id)context;
@end

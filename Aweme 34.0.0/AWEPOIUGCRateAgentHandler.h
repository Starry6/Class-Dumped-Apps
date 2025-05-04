@interface AWEPOIUGCRateAgentHandler : NSObject
@property (nonatomic) DitoGeneralContainerViewController controller;
- (void)bindStateAndAction;
- (void)pageWillBeginDragging:;
- (id)constData;
- (void)registerAgents;
- (id)extraPerformanceTrackParams;
- (void)hideFeedStatusView;
- (void)refreshPageMoniterStartTime;
- (void)loadMoreWithParams:;
- (void)handleLoadMoreWithData:error:;
- (void)beforeDidLoadPageModel:;
- (void)afterDidLoadPageModel:;
- (id)extraRequestCostParamsForResponse:;
- (void)setController:;
- (void).cxx_destruct;
- (id)initWithController:;
- (id)controller;
- (id)context;
@end

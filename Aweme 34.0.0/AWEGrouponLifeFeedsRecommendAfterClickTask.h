@interface AWEGrouponLifeFeedsRecommendAfterClickTask : NSObject
@property (nonatomic) AWEGrouponLifeFeedsPageContext pageContext;
@property (nonatomic) AWEGrouponLifeFeedsBaseComponentView componentView;
@property (nonatomic) AWEGrouponLifeFeedsBaseComponentVM viewModel;
@property (nonatomic) @? completeBlock;
@property (nonatomic) NSDictionary recommendData;
@property (nonatomic) <AWEHttpTask> requestTask;
- (void)setCompleteBlock:;
- (id)completeBlock;
- (id)initWithPageContext:;
- (id)recommendData;
- (void)setRecommendData:;
- (void)runWithComponentView:viewModel:completeBlock:;
- (void)didFetchRealTimeData:;
- (id)requestForRecommendAfterClickWithRealtimeData:;
- (void)didFinishRequestData:error:;
- (id)cardInfoWithViewModel:isClick:;
- (void)invokeCompleteBlock:error:;
- (id)viewModel;
- (id)requestTask;
- (void)cancel;
- (void)setViewModel:;
- (void)setRequestTask:;
- (void).cxx_destruct;
- (id)componentView;
- (void)setComponentView:;
- (void)setPageContext:;
- (id)pageContext;
@end

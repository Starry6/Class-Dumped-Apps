@interface AWEEcomPhotoSearchCachalotLynxPipeline : AWESearchCachalotLynxPipeline
@property (nonatomic) NSMutableArray lynxCardUpdateHeightArray;
@property (nonatomic) AWESearchDynamicEngine lynxEngineUpdateHeightParams;
- (void)updateComponentView:withViewModel:;
- (id)componentViewWithViewModel:;
- (id)componentViewSizeWithViewModel:containerWidth:;
- (BOOL)supportAsyncComponentViewSizeMeasureWithViewModel:;
- (id)lynxCardUpdateHeightArray;
- (void)setLynxCardUpdateHeightArray:;
- (void)lynxEngineDidUpdate:;
- (void)lynxEngine:viewDidChangeIntrinsicContentSize:;
- (void)trackAppendForClientCost:startTime:viewModel:;
- (void)p_updateHeightWithLynxEngine:;
- (void)p_updateLayoutAndCanBeCanceled:;
- (id)lynxEngineUpdateHeightParams;
- (void)setLynxEngineUpdateHeightParams:;
- (id)generateLynxEngineWithModel:preferWidth:useBullet:shouldReuseLynxView:searchScene:defaultReuseMethod:;
- (BOOL)shouldUseAnnieXWithViewModel:dynamicPatchModel:;
- (void).cxx_destruct;
@end

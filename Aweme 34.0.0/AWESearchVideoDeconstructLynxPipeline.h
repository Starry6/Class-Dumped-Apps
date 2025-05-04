@interface AWESearchVideoDeconstructLynxPipeline : AWESearchCachalotLynxPipeline
- (id)customGlobalProps;
- (void)updateComponentView:withViewModel:;
- (id)componentViewSizeWithViewModel:containerWidth:;
- (void)attachComponentView:usingViewModel:;
- (void)lynxEngineSearchLynxElementDidMount:;
- (void)lynxEngineSearchLynxElementDidBecomeActive:;
- (void)lynxEngineSearchLynxElementWillEnterFullScreen:;
- (void)lynxEngineSearchLynxElementDidResignActive:;
- (id)fetchControllerContextWithLynxEngine:;
- (id)fetchViewModelWithLynxEngine:;
- (BOOL)supportCustomGlobalProps;
@end

@interface AWEVisionSearchQuestionLynxPipeline : AWESearchCachalotLynxPipeline
@property (nonatomic) NSDictionary extraCommonParams;
- (id)customGlobalProps;
- (void)updateComponentView:withViewModel:;
- (id)componentViewWithViewModel:;
- (id)extraCommonParams;
- (void)setExtraCommonParams:;
- (void)lynxEngine:scrollElementToTopWithOffset:animated:completionBlock:;
- (id)getLynxSeparateRenderBlockList;
- (Class)getSeparateRenderConfigClass;
- (BOOL)enableDrawFromCacheOptimize;
- (BOOL)supportCustomGlobalProps;
- (id)getLynxReuseBlockList;
- (BOOL)visionSupportCardThemeGlobalProps;
- (void)preprocessDynamicPatch:;
- (void)setupExtraCommonParams:;
- (BOOL)appendScreenWidthGlobalProps;
- (void).cxx_destruct;
@end

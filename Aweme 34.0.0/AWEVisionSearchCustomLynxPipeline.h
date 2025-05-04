@interface AWEVisionSearchCustomLynxPipeline : AWESearchCachalotLynxPipeline
@property (nonatomic) NSDictionary extraCommonParams;
- (id)customGlobalProps;
- (id)extraCommonParams;
- (void)setExtraCommonParams:;
- (id)getLynxSeparateRenderBlockList;
- (BOOL)enableDrawFromCacheOptimize;
- (BOOL)supportCustomGlobalProps;
- (id)getLynxReuseBlockList;
- (BOOL)supportAsyncComponentViewSizeMeasure;
- (BOOL)blockLynxSeparateRenderForAsyncComponentViewSize;
- (BOOL)visionSupportCardThemeGlobalProps;
- (void)preprocessDynamicPatch:;
- (void)setupExtraCommonParams:;
- (BOOL)appendScreenWidthGlobalProps;
- (BOOL)enableVisionSearchLynxSeparateRender;
- (void).cxx_destruct;
@end

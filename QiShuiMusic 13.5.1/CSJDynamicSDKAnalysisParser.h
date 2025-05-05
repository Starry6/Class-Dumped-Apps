@interface CSJDynamicSDKAnalysisParser : NSObject
@property (nonatomic) CSJDynamicSDKAnalysisRenderCanvas canvas;
@property (nonatomic) CSJDynamicSDKCustomComponentManager customComponentManager;
@property (nonatomic) CSJDynamicViewGlobalModel globalModel;
@property (nonatomic) NSError error;
- (id)customComponentManager;
- (id)h5_getLayoutInfo_withDefaultDict:;
- (id)initWithGlobalModel:;
- (void)setCustomComponentManager:;
- (id)canvas;
- (void)setCanvas:;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (id)globalModel;
- (void)setGlobalModel:;
@end

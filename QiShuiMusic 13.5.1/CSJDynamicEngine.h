@interface CSJDynamicEngine : NSObject
@property (nonatomic) CSJDynamicEngineAdapter dynamicEngineAdapter;
@property (nonatomic) <CSJDynamicEngineDelegate> delegate;
@property (nonatomic) CSJRenderEngineViewModel renderEngineViewModel;
@property (nonatomic) CSJDynamicViewGlobalModel globalModel;
- (void)_pbu_analysis;
- (void)_pbu_sync_main__parse;
- (void)_pbu_sync_main__render;
- (id)dynamicEngineAdapter;
- (id)initWithDynamicEngineVersion:renderEngineViewModel:;
- (id)renderEngineViewModel;
- (void)safeDelegate_beginParseInDynamicEngine:;
- (void)safeDelegate_beginRenderInDynamicEngine:;
- (void)safeDelegate_endParseInDynamicEngine:error:;
- (void)safeDelegate_endRenderInDynamicEngine:error:;
- (void)safeDelegate_middleRenderInDynamicEngine:dynamicView:error:;
- (void)setDynamicEngineAdapter:;
- (void)setRenderEngineViewModel:;
- (void)setDelegate:;
- (void)parse;
- (id)delegate;
- (void).cxx_destruct;
- (void)render;
- (id)globalModel;
- (void)setGlobalModel:;
@end

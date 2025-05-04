@interface AWESearchUserCachalotLynxPipeline : AWESearchCachalotLynxPipeline
- (void)updateComponentView:withViewModel:;
- (id)generateLynxEngineWithModel:preferWidth:useBullet:shouldReuseLynxView:searchScene:defaultReuseMethod:;
- (id)getLynxSeparateRenderBlockList;
- (Class)getSeparateRenderConfigClass;
- (BOOL)needLynxEnginePrepareForReuse;
@end

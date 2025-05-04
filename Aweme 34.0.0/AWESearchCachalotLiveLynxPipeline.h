@interface AWESearchCachalotLiveLynxPipeline : AWESearchCachalotLynxPipeline
- (id)generateLynxEngineWithModel:preferWidth:useBullet:shouldReuseLynxView:searchScene:defaultReuseMethod:;
- (id)getLynxReuseBlockList;
- (BOOL)supportAsyncComponentViewSizeMeasure;
+ (BOOL)enableLiveSearchAsyncProcess;
@end

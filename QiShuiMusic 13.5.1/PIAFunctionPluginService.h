@interface PIAFunctionPluginService : NSObject
@property (nonatomic) PIABiMapTable pluginsMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)context:onParseManifestDone:;
- (void)engine:onFetchManifestDone:error:URL:;
- (void)engine:onLoadFinish:;
- (void)engine:onLoadStart:;
- (void)engine:onURLChange:;
- (id)getPluginInstance:engine:;
- (id)initService;
- (void)onEngineDestroy:;
- (void)onNavigationCommit:;
- (BOOL)registerFunctionPlugin:;
- (void)setPluginsMap:;
- (void)willFetchManifestWithContext:;
- (void).cxx_destruct;
- (id)pluginsMap;
+ (void)executePrepareServiceTask;
@end

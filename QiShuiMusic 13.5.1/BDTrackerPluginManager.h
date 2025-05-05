@interface BDTrackerPluginManager : NSObject
@property (nonatomic) <BDTrackerPluginCompression> zstdPlugin;
@property (nonatomic) <BDTrackerPluginSampling> samplingPlugin;
- (id)pluginForKey:;
- (id)samplingPlugin;
- (id)zstdPlugin;
- (void).cxx_destruct;
- (void)registerPlugin:;
- (void)initPlugins;
@end

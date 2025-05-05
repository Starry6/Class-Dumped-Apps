@interface IMThreadSafeBalloonPluginMap : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dataQueue;
@property (nonatomic) NSMutableDictionary map;
@property (nonatomic) NSDictionary dictionaryMapCopy;
@property (nonatomic) NSArray allIdentifiers;
@property (nonatomic) NSArray allPlugins;
@property (nonatomic) Q pluginCount;
- (id)allIdentifiers;
- (void).cxx_destruct;
- (id)map;
- (void)setMap:;
- (unsigned long long)count;
- (id)dataQueue;
- (id)pluginForIdentifier:;
- (id)allPlugins;
- (id)initWithConcurrentDataQueue:;
- (void)setPlugin:forIdentifier:;
- (void)updateWithMap:;
- (void)removePluginWithIdentifier:;
- (void)removePluginsWithIdentifiers:;
- (id)dictionaryMapCopy;
- (unsigned long long)pluginCount;
@end

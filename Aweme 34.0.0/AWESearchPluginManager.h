@interface AWESearchPluginManager : NSObject
@property (nonatomic) NSMutableArray pluginList;
@property (nonatomic) NSMapTable caches;
- (id)pluginList;
- (void)setCaches:;
- (void)setPluginList:;
- (id)caches;
- (void).cxx_destruct;
- (void)removePlugin:;
- (void)addPlugin:;
@end

@interface AWEGokuPluginCenter : HTSService
@property (nonatomic) NSMutableArray allPlugins;
@property (nonatomic) NSLock lock;
@property (nonatomic) NSMutableArray allTargets;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
- (void)removeObject:;
- (void)addObject:;
- (id)allTargets;
- (id)allPlugins;
- (void)setAllPlugins:;
- (void)removePlugin:;
- (void)addPlugin:;
- (void)setAllTargets:;
@end

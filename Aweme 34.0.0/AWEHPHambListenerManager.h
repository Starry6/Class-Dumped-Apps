@interface AWEHPHambListenerManager : NSObject
@property (nonatomic) @? getConfigBlock;
@property (nonatomic) AWEHPHambListenerNode rootNode;
@property (nonatomic) NSLock lock;
- (BOOL)p_tryUpdateConfigAndCallListenersWithNode:;
- (id)p_getConfigWithCmd:;
- (void)p_tryUpdateConfigWithNode:;
- (id)getConfigBlock;
- (void)tryUpdateConfigWithNames:;
- (void)tryUpdateAllConfig;
- (void)setGetConfigBlock:;
- (void)removeListener:;
- (void)setLock:;
- (void)addListener:;
- (id)initWithBlock:;
- (id)lock;
- (void).cxx_destruct;
- (id)rootNode;
- (void)setRootNode:;
@end

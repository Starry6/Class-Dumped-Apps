@interface AWESearchEventDispather : NSObject
@property (nonatomic) AWESearchComponentManager componentManager;
@property (nonatomic) AWESearchPluginManager pluginManager;
@property (nonatomic) NSMapTable sendProxyMap;
@property (nonatomic) NSMapTable broadcastProxyMap;
- (void)setComponentManager:;
- (void)setPluginManager:;
- (void)addEventWithObject:;
- (void)removeEventWithObject:;
- (id)sendProxyMap;
- (id)broadcastProxyMap;
- (void)setSendProxyMap:;
- (void)setBroadcastProxyMap:;
- (id)fetchSendEventWithProtocol:;
- (id)fetchBroadcastWithProtocol:object:;
- (id)init;
- (void)removeComponent:;
- (void).cxx_destruct;
- (void)addComponent:;
- (id)pluginManager;
- (void)removePlugin:;
- (void)addPlugin:;
- (id)componentList;
- (void)insertComponent:atIndex:;
- (id)componentManager;
@end

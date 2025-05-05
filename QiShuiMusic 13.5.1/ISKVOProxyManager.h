@interface ISKVOProxyManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)addProxyWithTarget:queue:keyPaths:delegate:;
- (void)removeProxyWithIdentifier:;
+ (id)sharedManager;
@end

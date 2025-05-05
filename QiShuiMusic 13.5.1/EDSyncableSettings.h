@interface EDSyncableSettings : NSObject
@property (nonatomic) @? proxyChangeHandler;
- (id)init;
- (void)dealloc;
- (void)_storeChangedExternally:;
- (void).cxx_destruct;
- (id)initWithDefaults:store:;
- (void)beginSyncing;
- (id)observeChangesForKey:cloudKey:conflictResolver:;
- (id)proxyChangeHandler;
- (void)setProxyChangeHandler:;
@end

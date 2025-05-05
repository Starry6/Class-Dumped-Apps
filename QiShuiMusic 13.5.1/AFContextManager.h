@interface AFContextManager : NSObject
- (id)_collateContexts;
- (id)init;
- (void)nothing;
- (void)dealloc;
- (void)_shutdownServer;
- (id)_serverName;
- (void)_startListening;
- (void)startCenter:;
- (BOOL)addContextProvider:;
- (void)_stopListening;
- (void).cxx_destruct;
- (void)removeContextProvider:;
- (void)_collateContextsIntoArray:;
+ (id)defaultContextManager;
@end

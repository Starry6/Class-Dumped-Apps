@interface TKTokenWatcherProxy : NSObject
- (void).cxx_destruct;
- (void)insertedToken:;
- (void)removedToken:;
- (id)initWithWatcher:;
@end

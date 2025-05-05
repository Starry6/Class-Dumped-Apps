@interface CRCarPlayAppDenylist : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSSet denylistedBundleIDs;
- (void)_setupConnection;
- (id)init;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)_denylistPreference;
- (BOOL)containsBundleIdentifier:;
- (void)_requestDenylistUpdate;
- (id)denylistedBundleIDs;
- (void)setDenylistedBundleIDs:;
@end

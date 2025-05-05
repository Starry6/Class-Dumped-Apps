@interface BMStreamsAccessClient : NSObject
- (id)init;
- (void)dealloc;
- (id)_newConnectionForDomain:;
- (void).cxx_destruct;
- (id)initWithSandboxExtensionCache:accessTracker:;
- (BOOL)requestReadAccessTokenForStreamIdentifier:streamType:;
- (BOOL)requestReadWriteAccessTokenForStreamIdentifier:streamType:;
- (BOOL)requestAccessToFlexibleStorage;
- (void)invalidateConnection:;
- (BOOL)_requestAccess:toStreamType:streamIdentifier:;
- (BOOL)_requestAccessToFlexibleStorage;
- (BOOL)_currentProcessIsSandboxed;
+ (BOOL)checkCurrentProcessEntitlementsForWriteAccessToStreamIdentifier:;
@end

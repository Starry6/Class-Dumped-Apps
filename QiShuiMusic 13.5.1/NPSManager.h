@interface NPSManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> internalQueue;
@property (nonatomic) NSXPCConnection xpcConnection;
- (id)init;
- (void)dealloc;
- (void)synchronizeUserDefaultsDomain:keys:container:appGroupContainer:;
- (void)synchronizeUserDefaultsDomain:keys:cloudEnabled:;
- (void)setInternalQueue:;
- (void)synchronizeNanoDomain:keys:cloudEnabled:;
- (void)setXpcConnection:;
- (void)synchronizeUserDefaultsDomain:keys:;
- (void)synchronizeNanoDomain:keys:;
- (id)xpcConnection;
- (void)synchronizeUserDefaultsDomain:keys:container:;
- (id)connection;
- (void).cxx_destruct;
- (void)unsafe_invalidate;
- (void)synchronizeUserDefaultsDomain:keys:container:appGroupContainer:cloudEnabled:;
- (void)invalidate;
- (id)internalQueue;
+ (BOOL)supportsWatch;
@end

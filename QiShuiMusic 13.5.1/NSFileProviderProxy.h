@interface NSFileProviderProxy : NSFileReactorProxy
@property (nonatomic) NSString secureID;
@property (nonatomic) NSUUID uniqueID;
@property (nonatomic) <NSFileProviderXPCInterface><NSXPCProxyCreating> remoteProvider;
@property (nonatomic) BOOL wantsWriteNotifications;
- (id)uniqueID;
- (void)dealloc;
- (id)remoteProvider;
- (void)observeEndOfWriteAtLocation:forAccessClaim:;
- (void)forwardUsingProxy:;
- (void)setWantsWriteNotifications:;
- (id)secureID;
- (id)_clientProxy;
- (void)movingItemAtLocation:requiresProvidingWithDestinationLocation:completionHandler:;
- (BOOL)allowedForURL:;
- (void)observePresentationChangeOfKind:withPresenter:url:newURL:;
- (BOOL)wantsWriteNotifications;
- (void)provideLogicalURLForURL:completionHandler:;
- (id)provideItemAtURL:withOptions:forAccessClaim:completionHandler:;
- (void)invalidate;
- (void)providePhysicalURLForURL:completionHandler:;
- (void)setItemLocation:;
- (id)initWithClient:remoteProvider:reactorID:secureID:uniqueID:;
- (id)provideItemForKernelRequestWithInfo:atURL:forProcess:withOptions:completionHandler:;
@end

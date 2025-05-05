@interface PLAutoBindingProxyFactory : NSObject
@property (nonatomic) <PLXPCProxyCreating> proxyFactory;
@property (nonatomic) NSURL photoLibraryURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)proxyFactory;
- (id)_bindToPhotoLibrary;
- (void)addBarrierBlock:;
- (BOOL)_isResultAnInterruptionError:;
- (id)synchronousRemoteObjectProxyWithErrorHandler:;
- (void)_connectionInterrupted:;
- (id)_lazilyBindToPhotoLibrary;
- (id)_bindToPhotoLibraryIfNecessary;
- (id)remoteObjectProxyWithErrorHandler:;
- (id)_attemptBindToPhotoLibrary;
- (id)_blackholeProxyForProxy:;
- (BOOL)_bindToPhotoLibraryIfNecessaryWithErrorHandler:;
- (void)_updateCachedBindResult:;
- (id)photoLibraryURL;
- (void).cxx_destruct;
- (id)initWithProxyFactory:photoLibraryURL:;
- (id)_bindToPhotoLibraryAndCacheResult;
- (id)_unboostingRemoteObjectProxy;
- (id)_cachedBindResult;
+ (id)clientToServiceSandboxExtensionForURL:;
+ (unsigned long long)maxBindAttemptCount;
@end

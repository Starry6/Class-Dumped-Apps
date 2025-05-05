@interface CXCallDirectoryExtensionHostContext : NSExtensionContext
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <CXCallDirectoryProviderHostProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setDelegate:;
- (id)initWithInputItems:listenerEndpoint:contextUUID:;
- (id)remoteObjectProxyWithErrorHandler:;
- (id)delegate;
- (void).cxx_destruct;
- (id)queue;
- (void)activate;
- (id)isIncrementalLoadingAllowed:;
- (id)addBlockingEntriesWithData:reply:;
- (id)removeBlockingEntriesWithData:reply:;
- (id)removeAllBlockingEntriesWithReply:;
- (id)addIdentificationEntriesWithData:reply:;
- (id)removeIdentificationEntriesWithData:reply:;
- (id)removeAllIdentificationEntriesWithReply:;
- (id)completeRequestWithReply:;
- (void)requestFailedWithError:completion:;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end

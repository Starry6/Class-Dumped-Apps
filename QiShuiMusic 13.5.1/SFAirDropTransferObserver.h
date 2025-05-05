@interface SFAirDropTransferObserver : SFXPCClient
@property (nonatomic) NSMutableDictionary transferIdentifierToTransfer;
@property (nonatomic) <SFAirDropTransferObserverDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)removedTransfer:;
- (id)exportedInterface;
- (void)updatedTransfer:;
- (id)machServiceName;
- (void)setDelegate:;
- (void)setTransferIdentifierToTransfer:;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)delegate;
- (void).cxx_destruct;
- (void)observeForLocalOnlyPropertiesOnTransfer:;
- (void)updateActionHandlersOnTransfer:;
- (void)removeObserverForLocalOnlyPropertiesOnTransfer:;
- (id)transferIdentifierToTransfer;
- (void)_getRemoteObjectProxyOnQueue:;
- (void)invalidate;
- (void)activate;
- (id)remoteObjectInterface;
@end

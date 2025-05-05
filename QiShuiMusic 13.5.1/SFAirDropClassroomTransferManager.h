@interface SFAirDropClassroomTransferManager : SFXPCClient
@property (nonatomic) <SFAirDropClassroomTransferDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)exportedInterface;
- (void)transferWithIdentifierWasDeclined:withFailureReason:;
- (id)machServiceName;
- (void)setDelegate:;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)delegate;
- (void)updateTransferWithIdentifier:withState:information:completionHandler:;
- (void).cxx_destruct;
- (void)transferWithIdentifierWasAccepted:;
- (void)_getRemoteObjectProxyOnQueue:;
- (void)invalidate;
- (void)activate;
- (id)remoteObjectInterface;
@end

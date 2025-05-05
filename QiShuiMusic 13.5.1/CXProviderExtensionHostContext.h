@interface CXProviderExtensionHostContext : CXProviderExtensionContext
@property (nonatomic) <CXProviderHostProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:;
- (id)delegate;
- (void).cxx_destruct;
- (id)commitTransaction:;
- (id)handleActionTimeout:;
- (id)handleAudioSessionActivationStateChangedTo:;
- (id)actionCompleted:completionHandler:;
- (id)requestTransaction:completionHandler:;
- (id)registerWithConfiguration:;
- (id)reportNewIncomingCallWithUUID:update:reply:;
- (id)reportCallWithUUID:updated:;
- (id)reportCallWithUUID:endedAtDate:privateReason:failureContext:;
- (id)reportOutgoingCallWithUUID:sentInvitationAtDate:;
- (id)reportOutgoingCallWithUUID:startedConnectingAtDate:;
- (id)reportOutgoingCallWithUUID:connectedAtDate:;
- (id)reportNewOutgoingCallWithUUID:update:;
- (id)reportAudioFinishedForCallWithUUID:;
- (id)reportCallWithUUID:changedFrequencyData:forDirection:;
- (id)reportCallWithUUID:changedMeterLevel:forDirection:;
- (id)reportCallWithUUID:crossDeviceIdentifier:changedBytesOfDataUsed:;
@end

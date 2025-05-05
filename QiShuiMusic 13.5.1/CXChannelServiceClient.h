@interface CXChannelServiceClient : CXServiceClient
@property (nonatomic) <CXChannelServiceClientDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isPermittedToUsePublicAPI;
- (id)initWithConnection:;
- (id)commitTransaction:;
- (id)handleActionTimeout:;
- (id)handleAudioSessionActivationStateChangedTo:;
- (id)actionCompleted:completionHandler:;
- (id)requestTransaction:completionHandler:;
- (id)registerWithConfiguration:completionHandler:;
- (id)reportAudioFinishedForChannelWithUUID:completionHandler:;
- (id)reportChannelWithUUID:updated:completionHandler:;
- (id)reportChannelWithUUID:disconnectedAtDate:disconnectedReason:completionHandler:;
- (id)reportChannelWithUUID:connectedAtDate:completionHandler:;
- (id)reportIncomingTransmissionEndedForChannelWithUUID:reason:completionHandler:;
- (id)reportIncomingTransmissionStartedForChannelWithUUID:update:shouldReplaceOutgoingTransmission:completionHandler:;
- (id)reportChannelWithUUID:startedConnectingAtDate:completionHandler:;
@end

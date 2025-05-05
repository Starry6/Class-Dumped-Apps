@interface SFActivityAdvertiser : SFXPCClient
@property (nonatomic) <SFActivityAdvertiserDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)exportedInterface;
- (id)machServiceName;
- (void)setDelegate:;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)delegate;
- (void)activityPayloadForAdvertisementPayload:command:requestedByDevice:withCompletionHandler:;
- (void)advertiseAdvertisementPayload:options:;
- (void)_getRemoteObjectProxyOnQueue:;
- (void)didSendPayloadForActivityIdentifier:toDevice:error:;
- (void)fetchPeerForUUID:withCompletionHandler:;
- (void)fetchSFPeerDevicesWithCompletionHandler:;
- (void)fetchLoginIDWithCompletionHandler:;
- (void)pairedDevicesChanged:;
- (id)remoteObjectInterface;
+ (id)sharedAdvertiser;
@end
